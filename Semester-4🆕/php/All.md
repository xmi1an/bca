### To display the message "Hello World" on the screen, you can use the echo function:

```php
<?php
echo "Hello World";
?>
```

To display the current date and time, you can use the date function:

```php <?php
echo "Today is " . date("Y/m/d") . "<br>";
date_default_timezone_set("asia/kolkata");//set timezone 
echo "The time is " . date("h:i:s");
?>
```

To display the Fibonacci series up to a given number of terms, you can use a loop and the echo function:

```php
<?php
$n = 10; // number of terms
$a = 0;
$b = 1;

echo "Fibonacci series: ";

for ($i = 1; $i <= $n; $i++) {
   echo $a . " ";
   $c = $a + $b;
   $a = $b;
   $b = $c;
}
?>
```

This will output the first 10 terms of the Fibonacci series: 0 1 1 2 3 5 8 13 21 34

To calculate the sum of a given number, you can use a loop and a variable to keep track of the sum:

```php
<?php
$n = 10; // number to be summed
$sum = 0;

for ($i = 1; $i <= $n; $i++) {
   $sum += $i;
}

echo "The sum of the numbers from 1 to $n is $sum.";
?>
```

This will output "The sum of the numbers from 1 to 10 is 55."

To create a form in PHP, you can use the form element and the input element:

```php
<html lang="en">
<head>
    <title>login from</title>
</head>
<body>
    <form action="" method="post">
        NAME :
        <input type="text" name="name" id="name">
        <br>
        EMAIL :
        <input type="EMAIL" name="email" id="EMAIL">
        <br>
        PASSWORD :
        <input type="password" name="pass" id="pass">
        <!-- <input type="submit" value="sub"> -->
        <button type="submit" name="sub">submit</button>
    </form>
    <br>
    <br>
</body>
</html>

<?php
if ($_POST) 
{
    echo "HELLO ". $_POST['name']. "<br>";
    // echo "YOUER NAME IS ". $_POST['name'] . "<br>";
    echo "YOUER EMAIL IS " . $_POST['email'] . "<br>";
    echo "YOUER PASSWORD IS  " . $_POST['pass'] . "<br>";
}
?>
```

This will create a form with a text input for the name and an email input for the email. When the form is submitted, it will be processed by the process_form.php script.
