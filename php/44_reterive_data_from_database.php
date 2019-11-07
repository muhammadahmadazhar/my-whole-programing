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

$sql="SELECT * FROM student";
$result=$conn->query($sql);
if($result->num_rows >0){
        while($row=$result->fetch_assoc()){
             echo $row['id']."   ". $row['name'] ."   ".$row['roll']."   ". $row['address']."<br>"; 
        }
}
?>