/* 2. Write a PHP program to display the today's date and current time. */

<?php
// Get current date and time
$currentDateTime = new DateTime();

// Format the date and time
$formattedDateTime = $currentDateTime->format('M d, Y h:i:s A');

// Output the date and time
echo "The current date and time is: " . $formattedDateTime;
?>