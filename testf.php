<?php
    if(isset($_FILES['img']))
    {
        echo "<pre>";
        print_r($_FILES);
        echo "</pre>";

        $imgname = $_FILES['img']['name'];
        $imgtempname = $_FILES['img']['tmp_name'];
        $size = $_FILES['img']['size'];
        echo $imgname;
        echo $imgtempname;

        if($size > 40000){
            echo "Size is Large..";
        }
        else{
            move_uploaded_file($imgtempname, "uploadedFiles/" . $imgname);
        }
    }
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
<form action="" method="POST" enctype="multipart/form-data">
    
Upload DP :<input type="file" name="img">

<button type="submit">Les GO</button>
</form>
</body>
</html>