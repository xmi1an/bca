<?php
$con = mysqli_connect('localhost','root','','crud');
// Check connection
if (!$con) {
        die("Connection failed: " . mysqli_connect_error());
       }
?>
