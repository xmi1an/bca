<?php
   if(isset($_POST['sub'])){
        $name = $_POST['name'];
        if(empty($name))
        {
            echo "name is required !";
        } 
    }         
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>form validation</title>
</head>
<body>
  <form method="post" action="">
    name: <input type="text"name="name">
    <br>
    email: <input type="text"name="email">
    <br>
    number: <input type="text"name="number">
    <br>
    <input type="submit" value="submit" name="sub">

  </form> 
</body>
</html>