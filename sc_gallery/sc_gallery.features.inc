<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function sc_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function sc_gallery_imagecache_default_presets() {
  $items = array(
    'node-gallery-cover' => array(
      'presetname' => 'node-gallery-cover',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => 150,
            'height' => 150,
          ),
        ),
      ),
    ),
    'node-gallery-display' => array(
      'presetname' => 'node-gallery-display',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'height' => 1500,
          ),
        ),
        '1' => array(
          'weight' => '1',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => 600,
          ),
        ),
      ),
    ),
    'node-gallery-thumbnail' => array(
      'presetname' => 'node-gallery-thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => 100,
            'height' => 100,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function sc_gallery_node_info() {
  $items = array(
    'node_gallery_gallery' => array(
      'name' => t('Gallery'),
      'module' => 'features',
      'description' => t('This is a gallery (album). This will be the parent of your individual images.'),
      'has_title' => '1',
      'title_label' => t('Gallery Name'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'node_gallery_image' => array(
      'name' => t('Gallery Image'),
      'module' => 'features',
      'description' => t('This is an individual image that will be linked to a gallery. This should not be accessed via node/add/node_gallery_image'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Caption'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
