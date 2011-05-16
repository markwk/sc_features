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
 * Implementation of hook_node_info().
 */
function sc_gallery_node_info() {
  $items = array(
    'image_gallery' => array(
      'name' => t('Image Gallery'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Gallery Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
