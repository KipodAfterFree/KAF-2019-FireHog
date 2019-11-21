<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>FireHog Home</title>
</head>
<body>
    <p>Welcome to FireHog</p>
    <p>If you are seeing this page right now, you have got it all set-up.</p>
    <div>
        <?php
        include_once "api.php";
        if(isset($_GET["page"])){
            display($_GET["page"]);
        }else{
            $id = random(256);
            hedgehog_create($id);
            display("start");
        }
        ?>
    </div>
</body>
</html>