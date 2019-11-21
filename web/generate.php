<?php
$ids = explode("\n", file_get_contents("ids.txt"));
$map = new stdClass();
while (count($ids) > 0) {
    shuffle($ids);
    $id = random(20);
    $map->$id = new stdClass();
    $map->$id->link = array_pop($ids);
    $map->$id->locations = array();
}

foreach ($map as $id => $content) {
    $array = array_keys((array)$map);
    shuffle($array);
    for ($i = 0; $i < 10; $i++) {
        array_push($content->locations, $array[$i]);
    }
}
file_put_contents("src/private/map.json", json_encode($map));

function random($length)
{
    $current = str_shuffle("0123456789abcdefghijklmnopqrstuvwxyz")[0];
    if ($length > 0) {
        return $current . random($length - 1);
    }
    return "";
}