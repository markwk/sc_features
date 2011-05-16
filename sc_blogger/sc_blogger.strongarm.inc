<?php

/**
 * Implementation of hook_strongarm().
 */
function sc_blogger_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_blog';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '2',
    'author' => '1',
    'options' => '3',
    'comment_settings' => '4',
    'menu' => '0',
    'taxonomy' => '-4',
    'path' => '5',
    'attachments' => '6',
    'flag' => '-1',
  );

  $export['content_extra_weights_blog'] = $strongarm;
  return $export;
}
