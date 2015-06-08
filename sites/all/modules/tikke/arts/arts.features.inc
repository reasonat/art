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
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function arts_eck_bundle_info() {
  $items = array(
    'artist_artist' => array(
      'machine_name' => 'artist_artist',
      'entity_type' => 'artist',
      'name' => 'artist',
      'label' => 'artist',
    ),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function arts_eck_entity_type_info() {
  $items = array(
    'artist' => array(
      'name' => 'artist',
      'label' => 'artist',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'language' => array(
          'label' => 'Entity language',
          'type' => 'language',
          'behavior' => 'language',
        ),
      ),
    ),
  );
  return $items;
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
