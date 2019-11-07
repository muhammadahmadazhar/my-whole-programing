<?php
class Father{
	const mark=101;
	function disp(){
		//self::$mark=66;
		echo "constant variable" . self::mark ."<br>";
	}
}
$obj=new Father;
$obj->disp();
echo Father::mark;
?>