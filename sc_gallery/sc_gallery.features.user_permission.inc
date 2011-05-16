<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function sc_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer image galleries
  $permissions['administer image galleries'] = array(
    'name' => 'administer image galleries',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create image_gallery content
  $permissions['create image_gallery content'] = array(
    'name' => 'create image_gallery content',
    'roles' => array(),
  );

  // Exported permission: delete any image_gallery content
  $permissions['delete any image_gallery content'] = array(
    'name' => 'delete any image_gallery content',
    'roles' => array(),
  );

  // Exported permission: delete own image_gallery content
  $permissions['delete own image_gallery content'] = array(
    'name' => 'delete own image_gallery content',
    'roles' => array(),
  );

  // Exported permission: edit any image_gallery content
  $permissions['edit any image_gallery content'] = array(
    'name' => 'edit any image_gallery content',
    'roles' => array(),
  );

  // Exported permission: edit own image_gallery content
  $permissions['edit own image_gallery content'] = array(
    'name' => 'edit own image_gallery content',
    'roles' => array(),
  );

  return $permissions;
}
