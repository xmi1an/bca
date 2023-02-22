<script type="text/javascript">
    window.location = "http://www.example.com/";
</script>

<?php
session_start();
// Check if the form has been submitted
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    // Get the value of the selected fruit from the form
    $selected_fruit = $_POST['fruit'];

    // Store the selected fruit in a session variable
    $_SESSION['fruit'] = $selected_fruit;

    // Redirect the user back to the form page
    header("Location: test.php");
    header("Location: http://www.example.com/");

    exit;
}
