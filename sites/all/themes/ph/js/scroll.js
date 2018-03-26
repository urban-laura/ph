(function($) {
Drupal.behaviors.Ph = {
  attach: function (context, settings) {

  	//scroll to default anchor
  	var hash = window.location.hash.substr(1);
  	console.log(hash);


  	if (hash) {
	  	$('html, body').animate({

		        scrollTop: $('#' + hash).offset().top

		      }, 1000);
	} 

	//init menu items
	$('.main_menu a').each(function() {
		console.log($(this).attr('href'));
		$(this).click(function() {
			console.log("Szia");
			$('html, body').animate({
			     scrollTop: $($(this).attr('href')).offset().top
			    }, 1000);
	  	});
	})







}
};
})(jQuery);