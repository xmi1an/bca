<?php
   if(isset($_FILES['img']))
   {
        echo "<pre>";
        print_r($_FILES);
        echo "</pre>";
        
        $file_name = $_FILES['img']['name'];
        $file_type = $_FILES['img']['type'];
        $file_fullPath = $_FILES['img']['full_path'];
        $file_tempname = $_FILES['img']['tmp_name'];
        echo $file_name;
        move_uploaded_file($file_tempname, "uploadedFiles/". $file_fullPath );
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
    <form action="" method="post" enctype="multipart/form-data">
        Resume : <input type="file" name="img">
        <input type="submit" value="Upload">
    </form>
</body>

</html>