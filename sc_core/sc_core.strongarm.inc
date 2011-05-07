<?php

/**
 * Implementation of hook_strongarm().
 */
function sc_core_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'allowed_html_1';
  $strongarm->value = '<a><em><strong><small><sup><sub><cite><blockquote><code><ul><ol><li><dl><dt><dd><h1><h2><h3><h4><h5> <h6><img><br><br /><p><div><span><b><i><font><color><embed><object><python><java><css><php><html><strike><table><caption><thead><tbody><tr><td><pre><iframe><p><fieldset><legend>';

  $export['allowed_html_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'allowed_html_3';
  $strongarm->value = '';

  $export['allowed_html_3'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_1';
  $strongarm->value = '1';

  $export['filter_html_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_html_3';
  $strongarm->value = '1';

  $export['filter_html_3'] = $strongarm;
  return $export;
}
