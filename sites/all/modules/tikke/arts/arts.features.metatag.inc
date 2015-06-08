<?php
/**
 * @file
 * arts.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function arts_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:art.
  $config['node:art'] = array(
    'instance' => 'node:art',
    'config' => array(),
  );

  return $config;
}
