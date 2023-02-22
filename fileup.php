<?php
if ($_FILES['file']['error'] === UPLOAD_ERR_OK) {
    $file_name = $_FILES['file']['name'];
    $file_size = $_FILES['file']['size'];
    $file_type = $_FILES['file']['type'];

    if ($file_size > 1000000) {
        // handle error, file size is too large
    }

    $allowed_types = array("image/jpeg", "image/png", "image/gif");
    if (!in_array($file_type, $allowed_types)) {
        // handle error, invalid file type
    }

    // continue with file upload
} else {
    // handle error, file was not uploaded
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
    <form action="upload.php" method="post" enctype="multipart/form-data">
        <label for="file">Choose file:</label>
        <input type="file" name="file" id="file">
        <input type="submit" value="Upload">
    </form>
</body>

</html>