<?php
$db_host="localhost";
$db_user="root";
$db_password="";
$db_name="test_db";
// only creating connection
//$conn=mysqli_connect("localhost","root","","test_db");
$conn=mysqli_connect($db_host,$db_user,$db_password,$db_name);
//if connection is not made then dont run our application
if(!$conn){
	die("connection failed");
}

// check connection
if($conn){
	echo "connection successfull" . "<br>";
}

else{
	echo "0 results";
}
?>

<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">

    <title>Hello, world!</title>
  </head>
  <body>
  <div class="container">
  <?php
  $sql="SELECT * FROM STUDENT";
$result=mysqli_query($conn,$sql);
if(mysqli_num_rows($result)>0){
 echo '<table class="table table-striped table-bordered table-hover">';
   echo '<thead class="thead-dark">';
     echo '<tr>';
       echo '<th>ID</th>';
       echo '<th>NAME</th>';
       echo '<th>ROLL</th>';
       echo '<th>ADDRESS</th>';
     echo '</tr>';
   echo '</thead>';

   echo '<tbody>';
   while($row=mysqli_fetch_assoc($result)){
     echo '<tr>';
       echo '<td>'.$row['id'].'</td>';
       echo '<td>'.$row['name'].'</td>';
       echo '<td>'.$row['roll'].'</td>';
       echo '<td>'.$row['address'].'</td>';
     echo '</tr>';
   echo '</tbody>';
   }
 echo '</table>';
}
mysqli_close($conn);
?>
</div>
    <!-- Optional JavaScript -->
    <!-- jQuery first, then Popper.js, then Bootstrap JS -->
    <script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>
  </body>
</html>