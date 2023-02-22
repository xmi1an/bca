<?php
$to_email = "mihirpatel9636@gmail.com";
$subject = "Simple Email Test via PHP";
$body = "Hi, Mihirr";
$headers = "From: jadavmilan009@gmail.com";
$check = mail($to_email, $subject, $body, $headers);
if ($check) {
    echo "Email successfully sent to $to_email...";
} 

else {
    echo "Email sending failed...";
}
?>