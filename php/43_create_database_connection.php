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
  echo  "Connection Successfull";    
}
?>