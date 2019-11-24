<?php
include_once "api.php";
$content = null;
if (isset($_GET["page"])) {
    $content = display($_GET["page"]);
} else {
    $id = random(32);
    hedgehog_create($id);
    header("Hedgehog: " . $id);
    $content = "<a href='?page=start'>Go</a>";
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>FireHog Home</title>
</head>
<body>
<p>Welcome to FireHog</p>
<p>Click 'Go'</p>
<div>
    <?php
    echo $content;
    ?>
</div>
</body>
</html>