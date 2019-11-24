<?php

const HEDGEHOGS_DIRECTORY = __DIR__ . DIRECTORY_SEPARATOR . "private" . DIRECTORY_SEPARATOR . "hedgehogs";
const MAP_FILE = __DIR__ . DIRECTORY_SEPARATOR . "private" . DIRECTORY_SEPARATOR . "map.json";

// Compatibility with lynx 2.8.1 - duh
apache_setenv('no-gzip', '1');

function display($page)
{
    $content = "";
    if (verify($page)) {
        $link = map()->$page->link;
        $content .= "<p><a href='http://www.youtube.com/watch?v=$link'>A Video</a></p>\n";
        foreach (map()->$page->locations as $location) {
            $random = random(2);
            $content .= "<p><a href='?page=$location'>$random</a></p>\n";
        }
    } else {
        $random = random(20);
        $content .= "<a href='?'>$random</a>\n";
    }
    return $content;
}

function verify($page)
{
    $headers = verify_headers();
    if ($headers !== null) {
        if (verify_hedgehog($headers)) {
            if (hedgehog_travel($headers[0], $page)) {
                $water = random(128);
                hedgehog_feed($headers[0], $water);
                header("Water: " . $water, true);
                header("Hedgehog: " . $headers[0], true);
                return true;
            }
        }
    }
    return false;
}

function verify_headers()
{
    if (isset($_SERVER["HTTP_USER_AGENT"])) {
        $agent = $_SERVER["HTTP_USER_AGENT"];
        if (isset($_SERVER["HTTP_FIRE"]) && isset($_SERVER["HTTP_HEDGEHOG"])) {
            $hedgehog = $_SERVER["HTTP_HEDGEHOG"];
            $fire = $_SERVER["HTTP_FIRE"];
            if ($agent === "FireHog/1.0.0") {
                return [$hedgehog, $fire];
            }
        }
    }
    return null;
}

function verify_hedgehog($headers)
{
    if (hedgehog_exists($headers[0])) {
        return hash("sha256", hedgehog_load($headers[0])->belly) === $headers[1];
    }
    return false;
}

function hedgehog_create($id)
{
    $hedgehog = new stdClass();
    $hedgehog->belly = "";
    $hedgehog->location = "start";
    hedgehog_unload($id, $hedgehog);
}

function hedgehog_feed($id, $water)
{
    $hedgehog = hedgehog_load($id);
    $hedgehog->belly .= $water;
    hedgehog_unload($id, $hedgehog);
}

function hedgehog_travel($id, $destination)
{
    $hedgehog = hedgehog_load($id);
    $current = $hedgehog->location;
    $map = map();
    if (isset($map->$current) && isset($map->$destination)) {
        if (in_array($destination, $map->$current->locations) ||
            in_array($current, $map->$destination->locations) ||
            $current === $destination) {
            $hedgehog->location = $destination;
            hedgehog_unload($id, $hedgehog);
            return true;
        }
    }
    return false;
}

function hedgehog_exists($id)
{
    if (preg_match("/^[a-z0-9]+$/", $id))
        return file_exists(HEDGEHOGS_DIRECTORY . DIRECTORY_SEPARATOR . $id);
    return false;
}

function hedgehog_load($id)
{
    if (preg_match("/^[a-z0-9]+$/", $id))
        return json_decode(file_get_contents(HEDGEHOGS_DIRECTORY . DIRECTORY_SEPARATOR . $id));
    return new stdClass();
}

function hedgehog_unload($id, $database)
{
    file_put_contents(HEDGEHOGS_DIRECTORY . DIRECTORY_SEPARATOR . $id, json_encode($database));
}

function random($length)
{
    $current = str_shuffle("0123456789abcdefghijklmnopqrstuvwxyz")[0];
    if ($length > 0) {
        return $current . random($length - 1);
    }
    return "";
}

function map()
{
    return json_decode(file_get_contents(MAP_FILE));
}