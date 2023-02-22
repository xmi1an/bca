<!--  -->
<?php

// Check if the form has been submitted
if (isset($_POST['send'])) {
    // Get the form data
    $name = $_POST['name'];
    $email = $_POST['email'];
    $password = $_POST['password'];

    // Display the confirmation message
    echo "Thank you for registering, $name!";
}
?>

<!-- HTML form -->
<form method="post" action="">
Name : <input type="text" name="name"><br><br>
Email: <input type="email" name="email"><br><br>
Password :  <input type="password" name="password" ><br><br>
    
    <input type="submit" name="send" value="Submit">
</form>