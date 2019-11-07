<?php
class Father{
	public static $a=10;
	public function disp(){
		echo "<br>static variable: ".self::$a;
	}
	public static function one($x){
		echo "How are you?". $x . "<br>";
		echo "inside class access static variable".self::$a."<br>";
	}
}
Father::one('ahmad');
echo Father::$a;
$obj=new Father;
$obj->disp();
?>