<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $number1 = $_POST["number1"];
    $number2 = $_POST["number2"];
    $operation = $_POST["operation"];
    if ($operation == 'sum') {
        $result = $number1 + $number2;
    }
    
    echo "The sum of $number1 and $number2 is $result";
}
?>