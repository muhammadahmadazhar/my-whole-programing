$(document).ready(function(){	
	var $fadeel, fadetotalHeight;
	$(".fadebuttons .read-more-button").click(function() {	
		$container = $(this).closest('.fce-accordion-container');
		$fadeel = $container.find('.fce-accordion-con');
		fadetotalHeight = 40
		fadetotalHeight += $container.find(".fce-accordion-header").outerHeight();			
		fadetotalHeight += $container.find(".fce-accordion-text").outerHeight();			
		fadetotalHeight += $container.find(".fce-accordion-elements").outerHeight();			

		$fadeel.css({
		// Set height to prevent instant jumpdown when max height is removed
				"height": $fadeel.height(),
				"max-height": 9999
			})
			.animate({
				"height": fadetotalHeight
			});
		// fade out read-more
		$container.find(".read-more-arrow").hide();
		$container.find(".read-more-overlay").fadeOut();
		$container.find('.read-less-arrow').show();
		return false;
	});
	$(".fadebuttons .read-less-button").click(function() {			
		$container = $(this).closest('.fce-accordion-container');
		$fadeel = $container.find('.fce-accordion-con');
		fadetotalHeight = $fadeel.height();
		$fadeel.css({
				// Set height to prevent instant jumpdown when max height is removed
				"height": fadetotalHeight,
				"max-height": 9999
			})
			.animate({
				"height": 140
			});
		$container.find(".read-less-arrow").hide();
		$container.find(".read-more-overlay").fadeIn();
		$container.find('.read-more-arrow').show();
		
		return false;
	});
});
		

$(document).ready(function(){
    $(".toggle_container").hide();
    $("p.expand_heading").click(function(){
        $(this).next(".toggle_container").slideToggle(1000);
      

        if($(this).hasClass('active'))
        {
 	       $(this).removeClass("active");
        }
        else
        {
        	$(this).addClass("active");
        	$(this).next(".toggle_container").find(".slick-track").css('transform', 'translate3d(0,0,0)');
        }
         
         
        });
 
});

