<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function sc_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer node gallery
  $permissions['administer node gallery'] = array(
    'name' => 'administer node gallery',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create node_gallery_gallery content
  $permissions['create node_gallery_gallery content'] = array(
    'name' => 'create node_gallery_gallery content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create node_gallery_image content
  $permissions['create node_gallery_image content'] = array(
    'name' => 'create node_gallery_image content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any node_gallery_gallery content
  $permissions['delete any node_gallery_gallery content'] = array(
    'name' => 'delete any node_gallery_gallery content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any node_gallery_image content
  $permissions['delete any node_gallery_image content'] = array(
    'name' => 'delete any node_gallery_image content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own node_gallery_gallery content
  $permissions['delete own node_gallery_gallery content'] = array(
    'name' => 'delete own node_gallery_gallery content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete own node_gallery_image content
  $permissions['delete own node_gallery_image content'] = array(
    'name' => 'delete own node_gallery_image content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any node_gallery_gallery content
  $permissions['edit any node_gallery_gallery content'] = array(
    'name' => 'edit any node_gallery_gallery content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any node_gallery_image content
  $permissions['edit any node_gallery_image content'] = array(
    'name' => 'edit any node_gallery_image content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own node_gallery_gallery content
  $permissions['edit own node_gallery_gallery content'] = array(
    'name' => 'edit own node_gallery_gallery content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own node_gallery_image content
  $permissions['edit own node_gallery_image content'] = array(
    'name' => 'edit own node_gallery_image content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view imagecache node-gallery-cover
  $permissions['view imagecache node-gallery-cover'] = array(
    'name' => 'view imagecache node-gallery-cover',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'manager',
      '4' => 'student',
      '5' => 'teacher',
    ),
  );

  // Exported permission: view imagecache node-gallery-display
  $permissions['view imagecache node-gallery-display'] = array(
    'name' => 'view imagecache node-gallery-display',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'manager',
      '4' => 'student',
      '5' => 'teacher',
    ),
  );

  // Exported permission: view imagecache node-gallery-thumbnail
  $permissions['view imagecache node-gallery-thumbnail'] = array(
    'name' => 'view imagecache node-gallery-thumbnail',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'manager',
      '4' => 'student',
      '5' => 'teacher',
    ),
  );

  // Exported permission: view node gallery
  $permissions['view node gallery'] = array(
    'name' => 'view node gallery',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
