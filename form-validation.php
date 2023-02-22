<?php
// Check if form has been submitted
if (isset($_POST['sub'])) {
    // Initialize variables to store error messages
    $nameErr = $emailErr = $websiteErr = $numberErr = "";

    // Get form input
    $name = $_POST["name"];
    $email = $_POST["email"];
    $number = $_POST["number"];

    // Check for empty fields
    if (empty($name)) {
        $nameErr = "Name is required";
    }

    if (empty($email)) {
        $emailErr = "Email is required";
    }
    if (empty($website)) {
        $websiteErr = "Website is required";
    }
    if (empty($number)) {
        $numberErr = "Number is required";
    }

    // Validate string input
    if (!preg_match("/^[a-zA-Z ]*$/", $name)) {
        $nameErr = "Only letters and white space allowed";
    }

    // Validate number input
    if (!is_numeric($number)) {
        $numberErr = "Invalid number";
    }

    // Validate email address
    if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
        $emailErr = "Invalid email format";
    }

    // Validate Input length 
    if (strlen($number) > 10) {
        $numberErr = "Number should be less than 10 digits";
    }

    // If there are no errors, process form data
    if (empty($nameErr) && empty($emailErr) && empty($numberErr)) {
        echo "Name: " . $name . "<br>";
        echo "Email: " . $email . "<br>";
        echo "Number: " . $number . "<br>";
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
    <style>
        .error {
            color: red;
        }
    </style>
</head>

<body>
    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>">
        Name: <input type="text" name="name">
        <span class="error">* <?php echo $nameErr; ?> </span><br>

        Email: <input type="text" name="email">
        <span class="error">* <?php echo $emailErr; ?></span><br>

        Number: <input type="text" name="number">
        <span class="error">* <?php echo $numberErr; ?></span><br>
        <input type="submit" value="Submit" name="sub">
    </form>
</body>
</html>