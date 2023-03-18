<?php
if (isset($_POST['done'])) {
  include '../includes/connection.php';

  $id = $_GET['id'];
  $username = $_POST['username'];
  $city = $_POST['city'];

  $q = "update details set username='$username', city='$city' where id = $id";
  $query = mysqli_query($con, $q);

  header('location: ../home.php');
}
?>

<!DOCTYPE html>
<html>

<head>
  <title>Update</title>

  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="../style/bootstrap.min.css">

</head>

<body>

  <div class="col-lg-6 m-auto">

    <form method="post">

      <br><br>
      <div>

        <div class="card-header bg-dark">
          <h1 class="text-white text-center">Update Details</h1>
        </div><br>

        <?php
        include '../includes/connection.php';
        $id = $_GET['id'];
        $showquery = "SELECT * FROM details where id = $id";
        $run = mysqli_query($con, $showquery);
        while ($res = mysqli_fetch_assoc($run)) {
          $res['username'];
          $res['city'];
        ?>

          <label> Username: </label>
          <input type="text" name="username" class="form-control" value="<?php echo $res['username']; ?>" placeholder=""> <br>

          <label> City: </label>
          <input type="text" name="city" value="<?php echo $res['city']; ?>" class="form-control"> <br>
        <?php
        }
        ?>
        <center> <button class="btn btn-success" type="submit" name="done"> Update </button> </center> <br>

      </div>
    </form>
  </div>
</body>

</html>
