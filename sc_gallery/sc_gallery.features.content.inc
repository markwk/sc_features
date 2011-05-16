<?php

/**
 * Implementation of hook_content_default_fields().
 */
function sc_gallery_content_default_fields() {
  $fields = array();

  // Exported field: field_gallery_intro
  $fields['image_gallery-field_gallery_intro'] = array(
    'field_name' => 'field_gallery_intro',
    'type_name' => 'image_gallery',
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
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '4',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_gallery_intro][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Gallery Description',
      'weight' => '-4',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_images
  $fields['image_gallery-field_images'] = array(
    'field_name' => 'field_images',
    'type_name' => 'image_gallery',
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
    'required' => '1',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '[uid]/gallery',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'fupload_mode' => 'multiple',
      'fupload_previewlist_img_attributes' => '',
      'fupload_title_replacements' => '_;{;};-',
      'fupload_previewlist_field_settings' => array(
        'imagefield_description' => 'imagefield_description',
        'node_title' => 0,
        'node_description' => 0,
        'imagefield_title' => 0,
        'imagefield_alt' => 0,
        'cck_field_gallery_intro' => 0,
      ),
      'fupload_previewlist_redirecturl' => '',
      'label' => 'Images',
      'weight' => '-2',
      'description' => '',
      'type' => 'image_fupload_imagefield_widget',
      'module' => 'image_fupload_imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Gallery Description');
  t('Images');

  return $fields;
}
