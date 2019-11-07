<?php
class Student{
	public $roll;
	function Student($roll){// function __construct($id)
		$this->roll=$roll;
		echo "parameterized constructor called $this->roll";
	}
	function __destruct(){
		echo "<br> Object trashed";
	}
}
   $ali=new Student(10);
?>