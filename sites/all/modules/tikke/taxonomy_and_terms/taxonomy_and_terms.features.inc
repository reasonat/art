<?php
/**
 * @file
 * taxonomy_and_terms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function taxonomy_and_terms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
