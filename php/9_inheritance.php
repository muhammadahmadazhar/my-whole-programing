<?php
class Father{
	public $a;
	public $b;
	public $sum;
	function getValue($x,$y){
		$this->a=$x;
		$this->b=$y;
	}
	function add(){
		$this->sum=$this->a+$this->b;
		return $this->sum;
		}
}
class Son extends Father{
	
	function display(){
		echo $this->a ."<br>";
		echo $this->b ."<br>";
		echo "SUM:".$this->add()."<br>";
	}
}
 $obj=new Son;
 $obj->getValue(10,20);
 $obj->display();

?>