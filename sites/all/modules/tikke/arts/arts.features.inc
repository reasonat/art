<?php
/**
 * @file
 * arts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function arts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function arts_node_info() {
  $items = array(
    'art' => array(
      'name' => t('יצירה'),
      'base' => 'node_content',
      'description' => t('מאפשר הוספת יצירה בודדת לאתר. '),
      'has_title' => '1',
      'title_label' => t('שם היצירה'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
