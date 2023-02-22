<?php

$x = 5;

function test(){
    global $x;
    echo "$x";
}

test();
echo "Out of function $x";

// Function with No Parameter and No Return Value.
function greet()
    {
        echo "Hello ";
    }
// greet();

 /* Function with Parameter. */
function msg($name)
    {
        echo "Hello $name";
    }
    // msg("Itachi");

/* Function with Parameter and return value. */
    echo "<br>";
    
    function sum($x, $y)
    {
        $sum = $x + $y;

        return $sum;
    }

    // $mysum =  sum(2, 4);

?>