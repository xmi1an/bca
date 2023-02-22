<!--  -->
<?php

    $a = 0;
    $b = 1;
    // Print the first two terms
    echo "$a <br> $b <br>";
    // Loop through the remaining terms
    for ($i = 3; $i <= 10; $i++) {
        // Calculate the next term
        $c = $a + $b;
        // Print the term
        echo "$c <br>";
        // Update the variables for the next iteration
        $a = $b;
        $b = $c;
    }

