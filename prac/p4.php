<?php

$n = 123;
$sum = 0;
// Loop through each digit of the number
while ($n > 0) {
    // Add the last digit of the number to the sum
    $sum += $n % 10;
    // Remove the last digit of the number
    $n = $n / 10;
}

echo "$sum";