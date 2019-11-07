$(document).ready(function(){
 var windowwidth = window.screen.width < window.outerWidth ? window.screen.width : window.outerWidth;
 var mobilewidth = "1000";	
 if(windowwidth<mobilewidth){
  $("#searchboxcon H1").clone().appendTo("#mobileh1"); 
  $("#searchboxcon H1").remove();
  }
});