<?php
$ids = explode("\n", file_get_contents("ids.txt"));
$map = new stdClass();
while (count($ids) > 0) {
    shuffle($ids);
    $id = random(20);
    $map->$id = new stdClass();
    $map->$id->link = $ids[0];
    $map->$id->locations = array();
}



function recursively()
{
    global $map, $ids;

}

function random($length)
{
    $current = str_shuffle("0123456789abcdefghijklmnopqrstuvwxyz")[0];
    if ($length > 0) {
        return $current . random($length - 1);
    }
    return "";
}