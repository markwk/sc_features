<?php

/**
 * Implementation of hook_strongarm().
 */
function sc_gallery_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_gallery_node_gallery_gallery';
  $strongarm->value = array(
    'gallery_type' => 'node_gallery_gallery',
    'image_type' => 'node_gallery_image',
    'name' => 'Node Gallery Default',
    'gallery_directory' => '',
    'default_cover' => '',
    'number_uploads' => '5',
    'display_fields' => array(
      'title' => 'title',
      'body_field' => 'body_field',
    ),
    'content_display' => 'image',
    'view_original' => '0',
    'view_original_text' => 'Download the Original Image',
    'lightbox2' => 'node-gallery-display',
    'image_size' => array(
      'cover' => 'node-gallery-cover',
      'thumbnail' => 'node-gallery-thumbnail',
      'preview' => 'node-gallery-display',
    ),
    'teaser' => array(
      'gallery_display_type' => 'thumbnails',
      'thumbnails_num' => '6',
      'lightbox2_gallery' => 'node-gallery-display',
      'image' => 'node-gallery-thumbnail',
    ),
    'upload_limits' => array(
      'general' => array(
        'file_extension' => 'jpg jpeg gif png',
        'file_resolution' => '0',
        'file_max_size' => '1',
        'user_max_size' => '2',
      ),
      'roles' => array(
        3 => 'editor',
      ),
      'role_3' => array(
        'role_name' => 'editor',
        'file_max_size' => '1',
        'user_max_size' => '2',
      ),
    ),
    'gallery' => array(
      'gallery_display_type' => 'thumbnails',
      'lightbox2_gallery_preset' => 'node-gallery-display',
    ),
  );

  $export['node_gallery_node_gallery_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_node_gallery_image';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_node_gallery_image'] = $strongarm;
  return $export;
}
