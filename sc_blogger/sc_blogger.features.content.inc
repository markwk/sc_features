<?php

/**
 * Implementation of hook_content_default_fields().
 */
function sc_blogger_content_default_fields() {
  $fields = array();

  // Exported field: field_attachment
  $fields['blog-field_attachment'] = array(
    'field_name' => 'field_attachment',
    'type_name' => 'blog',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps odt ods odp py rb zip java swf pages key numbers gz tar bz2',
      'file_path' => '[uid]/blog-pics',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '10M',
      'max_filesize_per_node' => '',
      'insert' => 1,
      'insert_styles' => array(
        'auto' => 'auto',
        'image' => 'image',
        'imagecache_Large' => 'imagecache_Large',
        'imagecache_Medium' => 'imagecache_Medium',
        'imagecache_Small' => 'imagecache_Small',
        'link' => 0,
        'imagecache_reg' => 0,
        'imagecache_short' => 0,
        'imagecache_thumb' => 0,
        'imagecache_tiny' => 0,
      ),
      'insert_default' => 'auto',
      'insert_class' => '',
      'insert_width' => '',
      'label' => 'Attachment',
      'weight' => '-2',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attachment');

  return $fields;
}
