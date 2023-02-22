<?php session_start(); ?>

<form action="save_fruit.php" method="post">
    Select your favorite fruit:
    <select name="fruit">
        <option value="apple" <?php if ($_SESSION['fruit'] == 'apple') echo 'selected'; ?>>Apple</option>
        <option value="banana" <?php if ($_SESSION['fruit'] == 'banana') echo 'selected'; ?>>Banana</option>
        <option value="grape" <?php if ($_SESSION['fruit'] == 'grape') echo 'selected'; ?>>Grape</option>
    </select>
    <input type="hidden" name="state" value="<?php echo $_SESSION['fruit']; ?>">
    <input type="submit" value="Submit">
</form>