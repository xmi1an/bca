<?php
// Check if form has been submitted
if (isset($_POST['sub'])) {
        $name = $_POST['name'];
        if(empty($name))
        {
            echo "Name is required !";
        }
}   

?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Form Validation</title>
</head>

<body>
    <form method="POST" action="">
        Name: <input type="text" name="name">
<br>
        Email: <input type="text" name="email">
<br>
        Number: <input type="text" name="number">
<br>
        <input type="submit" value="Submit" name="sub">
    </form>
</body>
</html>