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
$sql="SELECT * FROM STUDENT";
$result=mysqli_query($conn,$sql);
if(mysqli_num_rows($result)>0){
	while($row=mysqli_fetch_assoc($result)){
	echo $row['id']." ".$row['name']." ".$row['roll']." ".$row['address']."<br>";
     }
}
else{
	echo "0 results";
}
?>