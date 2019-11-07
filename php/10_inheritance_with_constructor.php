<?php
class Father{
	public $a;
	function __construct($x){
		$this->a=$x;
		echo "parent constructor: ".$this->a;
	}
}
class Son extends Father{
	public $b;
	function __construct($x ,$y){
		parent::__construct($x);
		$this->b=$y;
		echo "child constructor: ".$this->b;
	}
}
$obj=new Son(10,20);
?>