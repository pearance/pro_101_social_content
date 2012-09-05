<?php
/**
 * @file
 * pro_101_social_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_social_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: configure social block attributes.
  $permissions['configure social block attributes'] = array(
    'name' => 'configure social block attributes',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'jasm',
  );

  return $permissions;
}
