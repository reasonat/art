/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.my_custom_behavior = {
  attach: function(context, settings) {

$height = $(window).height()-138;

$(".menu-button").click(function(){
  if ($("#main-menu").hasClass("hide")){
    $("#triangle-topleft").addClass("display").removeClass("hide");
    $("#square").addClass("display").removeClass("hide");
    $("#main-menu").addClass("display").removeClass("hide");
    $("body").addClass("display-menu");
    $(".display-menu #main-menu").css("height", $height); 
    $(".display-menu #square").css("height", $height); 
    $("#triangle-topleft").css("border-bottom-width", $height); 
  }
  else if ($("#main-menu").hasClass("display")){
    $("#triangle-topleft").addClass("hide").removeClass("display");
    $("#main-menu").addClass("hide").removeClass("display");
    $("#square").addClass("hide").removeClass("display");
    $("body").removeClass("display-menu");
  }
});

$("#block-search-form .form-type-textfield label").removeClass("element-invisible");


  }
};


})(jQuery, Drupal, this, this.document);
