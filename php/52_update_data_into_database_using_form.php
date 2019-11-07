<?php
$db_host="localhost";
$db_user="root";
$db_password="";
$db_name="test_db";
// only creating connection
//$conn=mysqli("localhost","root","","test_db");
$conn=new mysqli($db_host,$db_user,$db_password,$db_name);
if($conn->connect_error){
    die("connection failed");    
}else{
  echo  "Connection Successfull <hr>";    
}
// check connection
if(isset($_REQUEST['submit'])){
     if(($_REQUEST['name'] =="") || ($_REQUEST['roll'] =="") || ($_REQUEST['address'] =="") ){
        echo "<small>Fill All Fields</small><hr>";
     }
     else{ 
        $name=$_REQUEST['name'];
        $roll=$_REQUEST['roll'];
        $address=$_REQUEST['address'];
        $sql="INSERT INTO student (name, roll, address) VALUE('$name','$roll','$address')";
        if($conn->query($sql) === TRUE){
          echo "new record inserted successfully";
        }else{
          echo "Enable to insert data";
        }    
     }
}

if(isset($_REQUEST['delete'])){
    $sql="DELETE FROM student WHERE id={$_REQUEST['id']}";
    if($conn->query($sql) === TRUE){
            echo "record deleted";
    }else{
            echo "ERROR enable to delete record";
    }

}

if(isset($_REQUEST['edit'])){
    $sql="SELECT * FROM student WHERE id={$_REQUEST['id']}";
    $result=$conn->query($sql);
    $row=$result->fetch_assoc();
}

if(isset($_REQUEST['update'])){
    if(($_REQUEST['name'] =="") || ($_REQUEST['roll'] =="") || ($_REQUEST['address'] =="") ){
            echo "<small>Fill All Fields</small><hr>";
    }
    else{ 
    $name=$_REQUEST['name'];
    $roll=$_REQUEST['roll'];
    $address=$_REQUEST['address'];
    $sql="UPDATE student SET name='$name',roll='$roll',address='$address' WHERE id={$_REQUEST['idd']}";
         if($conn->query($sql) === TRUE){
            echo "record updated";     
         }else{
                 "Unable To Update";
         }
    }
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
        <div class="row">
         <div class="col-sm-4">
          <form action="" method="POST">
           <div class="form-group">
           <label for="name">Name</label>
                <input type="text" name="name" class="form-control"
                value="<?php if(isset($row['name'])){
                                   echo $row['name'];} ?>">
                <label for="roll">Roll</label>
                <input type="text" name="roll" class="form-control"
                value="<?php if(isset($row['roll'])){
                                   echo $row['roll'];} ?>">
                <label for="address">Address</label>
                <input type="text" name="address" class="form-control"
                value="<?php if(isset($row['address'])){
                                   echo $row['address'];} ?>">
                <button type="submit" name="submit" class="btn btn-primary">Submit</button>
                <input type="hidden" name="idd" value="<?php echo $row['id'] ?>">
                <button type="submit" name="update" class="btn btn-success">Update</button>
           </div>
          </form>
         </div>
         
              <div class="col-sm-6 offset-sm-2">
                <?php
                $sql="SELECT * FROM STUDENT";
                $result=$conn->query($sql);
                if($result->num_rows >0){
                echo '<table class="table table-striped table-bordered table-hover">';
                  echo '<thead class="thead-dark">';
                    echo '<tr>';
                      echo '<th>ID</th>';
                      echo '<th>NAME</th>';
                      echo '<th>ROLL</th>';
                      echo '<th>ADDRESS</th>';
                      echo '<th>ACTION</th>';
                    echo '</tr>';
                  echo '</thead>';

                  echo '<tbody>';
                  while($row=$result->fetch_assoc()){
                    echo '<tr>';
                      echo '<td>'.$row['id'].'</td>';
                      echo '<td>'.$row['name'].'</td>';
                      echo '<td>'.$row['roll'].'</td>';
                      echo '<td>'.$row['address'].'</td>';
                      echo '<td><form action="" method="POST"><input type="hidden" name="id" value=' . $row['id'] . '><input type="submit" name="delete" value="delete" class="btn btn-sm btn-danger">
                      <input type="submit" name="edit" value="Edit" class="btn btn-sm btn-warning"></form></td>';
                      
                    echo '</tr>';
                  
                  }
                }
                $conn->close();
                ?>
               </tbody> 
            </table>  
              </div>
        </div>
       </div>

    <!-- Optional JavaScript -->
    <!-- jQuery first, then Popper.js, then Bootstrap JS -->
    <script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>
  </body>
</html>