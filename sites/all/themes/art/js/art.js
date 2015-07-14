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

$(".menu-button").click(function(){
  if ($("#main-menu").hasClass("hide")){
    $("#main-menu").addClass("display").removeClass("hide");
    $("body").addClass("display-menu");
  }
  else if ($("#main-menu").hasClass("display")){
    $("#main-menu").addClass("hide").removeClass("display");
    $("body").removeClass("display-menu");
  }
});


  }
};


})(jQuery, Drupal, this, this.document);
