<?php

const HEDGEHOGS_DIRECTORY = __DIR__ . DIRECTORY_SEPARATOR . "private" . DIRECTORY_SEPARATOR . "hedgehogs";
const MAP_FILE = __DIR__ . DIRECTORY_SEPARATOR . "private" . DIRECTORY_SEPARATOR . "map.json";

// Compatibility with lynx 2.8.1 - duh
apache_setenv('no-gzip', '1');

function display($page)
{
    if (verify($page)) {
        $link = map()->$page->link;
        echo "<a href='http://www.youtube.com/watch?v=$link'>A Video</a>\n";
        foreach (map()->$page->locations as $location) {
            $random = random(20);
            echo "<a href='?page=$location'>$random</a>\n";
        }
    } else {
        $random = random(20);
        echo "<a href='?'>$random</a>\n";
    }
}

function verify($page)
{
    $headers = verify_headers();
    if ($headers !== null) {
        if (verify_hedgehog($headers)) {
            if (hedgehog_travel($headers[0], $page)) {
                $water = random(128);
                hedgehog_feed($headers[0], $water);
                header("Water: " . $water);
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
        $belly = hash("sha256", hedgehog_load($headers[0])->belly);
        $decrypted = openssl_decrypt(base64_decode($headers[1]), 'AES-256-CBC', hash("sha256", $headers[0]), OPENSSL_NO_PADDING, "FireHog//Browser");
        return $belly === $decrypted;
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
    $map = map();
    if (isset($map->{$hedgehog->location}) && isset($map->$destination)) {
        if (array_search($destination, $map->{$hedgehog->location}->locations) !== false ||
            array_search($hedgehog->location, $map->$destination->locations) !== false ||
            $hedgehog->location === $destination) {
            $hedgehog->location = $destination;
            hedgehog_unload($id, $map);
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
    return json_decode(file_get_contents(HEDGEHOGS_DIRECTORY . DIRECTORY_SEPARATOR . $id));
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