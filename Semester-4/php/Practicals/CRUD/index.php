<?php
include 'includes/connection.php';
$insert = false;
$delete = false;

if (isset($_POST['done'])) {

  $username = $_POST['username'];
  $city = $_POST['city'];
  $q = " INSERT INTO `details`(`username`, `city`) VALUES ( '$username', '$city' )";
  $insert = mysqli_query($con, $q);
}
if ($insert) {
  $insert = true;
}
if ($delete) {
  $delete = true;
}
?>

<!DOCTYPE html>
<html>
<head>
  <title>CRUD</title>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="style/bootstrap.min.css">
</head>

<body>
  <div class="container my-1 text-center ">
    <h1 class="text-primary text-center">CRUD</h1>
  </div>
  </div>
  <div class="container">
    <div class="col-lg-12">
      <div>
        <br>
        <?php
        if ($insert) {
          echo "
          <div class='alert alert-success alert-dismissible fade show' role='alert'>
          <strong>Registration Success!!</strong>
          <button type='button' class='btn-close' data-bs-dismiss='alert' aria-label='Close'></button>
        </div>
          ";
        }
        if ($delete) {
          echo "
          <div class='alert alert-danger alert-dismissible fade show' role='alert'>
          <strong>Deleted!</strong>
          <button type='button' class='btn-close' data-bs-dismiss='alert' aria-label='Close'></button>
        </div>
          ";
        }
        ?>

        <div class="row g-2 mb-4 shadow-sm h-md-250 position-relative">

          <div class="col-lg-3 m-auto">
            <form method="post">
              <div class="mb-3">
                <input class="form-control form-control-lg mb-3" type="text" name="username" placeholder="Thor" class="form-control" required>
              </div>

              <div class="mb-3">
                <input type="text" name="city" placeholder="Asguard" class="form-control form-control-lg mb-3" required>
              </div>
              <center>
                <button class="btn btn-success btn-lg" type="submit" name="done"> Insert </button><br>
                <br>
              </center>
          </div>
          </form>
        </div>
      </div>

      <table class=" table table-striped table-hover table-bordered border-info">
        <tr class="bg-secondary text-white text-center">

          <th> Id </th>
          <th> Username </th>
          <th> City </th>
          <th> Action </th>
        </tr>
        <?php
        $q = "SELECT * from details";
        $query = mysqli_query($con, $q);
        $sno = 0;
        while ($res = mysqli_fetch_assoc($query)) {
        ?>
          <tr class="text-center">
            <td> <?php $sno = $sno + 1;
                  echo $sno; ?> </td>
            <td> <?php echo $res['username'];  ?> </td>
            <td> <?php echo $res['city'];  ?> </td>
            <td> <span class="badge rounded-pill bg-primary"> <a href="pages/update.php?id=<?php echo $res['id']; ?>" class="text-white" style="text-decoration: none;">
                  Update </a> </span>

              <span class="badge rounded-pill bg-danger" onclick="confirm('Are You Sure?') "> <a href="pages/delete.php?id=<?php echo $res['id']; ?>" class="text-white" style="text-decoration: none;">
                  Delete </a> </span>
            </td>
          </tr>
        <?php
        }
        ?>
      </table>
    </div>
  </div>
</body>

</html>
