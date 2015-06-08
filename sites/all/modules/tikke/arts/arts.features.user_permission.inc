<?php
/**
 * @file
 * arts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function arts_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck add artist artist entities'.
  $permissions['eck add artist artist entities'] = array(
    'name' => 'eck add artist artist entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck add artist bundles'.
  $permissions['eck add artist bundles'] = array(
    'name' => 'eck add artist bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer artist artist entities'.
  $permissions['eck administer artist artist entities'] = array(
    'name' => 'eck administer artist artist entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck administer artist bundles'.
  $permissions['eck administer artist bundles'] = array(
    'name' => 'eck administer artist bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete artist artist entities'.
  $permissions['eck delete artist artist entities'] = array(
    'name' => 'eck delete artist artist entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck delete artist bundles'.
  $permissions['eck delete artist bundles'] = array(
    'name' => 'eck delete artist bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit artist artist entities'.
  $permissions['eck edit artist artist entities'] = array(
    'name' => 'eck edit artist artist entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck edit artist bundles'.
  $permissions['eck edit artist bundles'] = array(
    'name' => 'eck edit artist bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list artist artist entities'.
  $permissions['eck list artist artist entities'] = array(
    'name' => 'eck list artist artist entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck list artist bundles'.
  $permissions['eck list artist bundles'] = array(
    'name' => 'eck list artist bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view artist artist entities'.
  $permissions['eck view artist artist entities'] = array(
    'name' => 'eck view artist artist entities',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'eck view artist bundles'.
  $permissions['eck view artist bundles'] = array(
    'name' => 'eck view artist bundles',
    'roles' => array(),
    'module' => 'eck',
  );

  // Exported permission: 'manage artist properties'.
  $permissions['manage artist properties'] = array(
    'name' => 'manage artist properties',
    'roles' => array(),
    'module' => 'eck',
  );

  return $permissions;
}
