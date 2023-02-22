<?php

// Check if the form has been submitted
if (isset($_POST['submit'])) {
    // Get the form fields and remove whitespace.
    // $name = strip_tags(trim($_POST["name"]));
    // $name = str_replace(array("\r", "\n"), array(" ", " "), $name);
    // $email = filter_var(trim($_POST["email"]), FILTER_SANITIZE_EMAIL);
    // $message = trim($_POST["message"]);

    $name = $_POST['name'];
    $email = $_POST['email'];
    $message = $_POST['message'];

    // Check that data was sent to the mailer.
    if (empty($name) or empty($message) or !filter_var($email, FILTER_VALIDATE_EMAIL)) {
        // Set a 400 (bad request) response code and exit.
        http_response_code(400);
        echo "Oops! There was a problem with your submission. Please complete the form and try again.";
        exit;
    }

    $to = "recipient@example.com";
    $subject = "New contact from $name";
    $message = "Messege: $message\n";
    $headers = "From: sender@example.com" . "\r\n" .
        "CC: cc_recipient@example.com";

    mail(
        $to,
        $subject,
        $message,
        $headers
    );

    echo "Email sent successfully.";
}
?>

<html>

<body>
    <form method="post">
        To: <input type="text" name="to"><br><br>
        Subject: <input type="text" name="subject"><br><br>
        Message:<br><textarea rows="5" name="message"></textarea><br><br>
        <input type="submit" value="Send Email">
    </form>
</body>

</html>