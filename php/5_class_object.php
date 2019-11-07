<?php
class Mobile{

  public $model;
  function showModel($number){
   // global $model;
   // $model=$number
   $this->model=$number;
   echo "Model Number:$this->model";
  }
}
   $samsung=new Mobile;
   $samsung->showModel('Note 5');

   $htc=new Mobile;
   $htc->model="Desire 628"
?>