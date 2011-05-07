<?php

/**
 * Implementation of hook_filter_default_formats().
 */
function sc_core_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML
  $formats['Filtered HTML'] = array(
    'name' => 'Filtered HTML',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'manager',
    ),
    'filters' => array(
      '0' => array(
        'module' => 'filter',
        'delta' => '2',
        'weight' => '-9',
      ),
      '1' => array(
        'module' => 'filter',
        'delta' => '0',
        'weight' => '-8',
      ),
      '2' => array(
        'module' => 'filter',
        'delta' => '3',
        'weight' => '-6',
      ),
    ),
  );

  // Exported format: Full HTML
  $formats['Full HTML'] = array(
    'name' => 'Full HTML',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
    'filters' => array(
      '0' => array(
        'module' => 'filter',
        'delta' => '2',
        'weight' => '0',
      ),
      '1' => array(
        'module' => 'filter',
        'delta' => '1',
        'weight' => '1',
      ),
      '2' => array(
        'module' => 'filter',
        'delta' => '3',
        'weight' => '10',
      ),
    ),
  );

  // Exported format: Messaging plain text
  $formats['Messaging plain text'] = array(
    'name' => 'Messaging plain text',
    'roles' => array(),
    'filters' => array(
      '0' => array(
        'module' => 'filter',
        'delta' => '1',
        'weight' => '-10',
      ),
      '1' => array(
        'module' => 'messaging',
        'delta' => '1',
        'weight' => '-9',
      ),
    ),
  );

  return $formats;
}
