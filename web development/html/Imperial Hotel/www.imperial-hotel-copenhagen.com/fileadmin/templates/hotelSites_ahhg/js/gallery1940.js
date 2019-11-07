$(document).ready(function() {

	$('#galleryimages, #galleryimages_580').cycle({
		fx:    'fade',
		cleartype:false,
		timeout: 5000,
		easing: 'easeInSine',
		speed: 'slow',
		next:	'#next',
		prev:	'#back'
	});
	$('#back, #next').click(function(){
		$('#galleryimages, #galleryimages_580').cycle('pause');
	});
});