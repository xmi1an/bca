<?php
include '../includes/connection.php';

$id = $_GET['id'];

$q = " DELETE FROM `details` WHERE id = $id";
mysqli_query($con, $q);

header('location: ../home.php');
?>