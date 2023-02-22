<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sum</title>
</head>

<body>
    <form method="post" action="calculate.php">
        Number 1: <input type="text" name="number1" value="<?php echo $number1; ?>">
        Number 2: <input type="text" name="number2" value="<?php echo $number2; ?>">
        <input type="hidden" name="operation" value="sum">
        <input type="submit" value="Calculate">
    </form>

</body>

</html>