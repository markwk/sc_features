<?php

/**
 * Implementation of hook_content_default_fields().
 */
function sc_user_content_default_fields() {
  $fields = array();

  // Exported field: field_age
  $fields['profile-field_age'] = array(
    'field_name' => 'field_age',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '32',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'computed_value',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'computed_value',
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
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '<?php
if (!$node->nid) node_save($node);
$dob = $node->field_bday<sup class="footnote"><a href="#fn13011340964dc0ae6d37bb3">0</a></sup>[\'value\'];
$now = time();
$then = strtotime($dob);
$diff = date(\'Y\', $now) – date(\'Y\', $then);

if($diff < 0) /* ideally you want to prevent this from happening */
echo \'??? – negative age.\';

if(($diff > 0) && (date(\'z\',$now) < date(\'z\',$then)))
$diff —;
$node_field<sup class="footnote"><a href="#fn13011340964dc0ae6d37bb3">0</a></sup>[\'value\'] = $diff;
?>',
    'display_format' => '<?php
$display = $node_field_item[\'value\']; 
?>',
    'store' => 1,
    'data_type' => 'int',
    'data_length' => '3',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 0,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Age',
      'weight' => '-1',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_dob
  $fields['profile-field_dob'] = array(
    'field_name' => 'field_dob',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '31',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
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
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'm/d/Y - H:i:s',
      'input_format_custom' => '\'F j, Y\'',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-100:+10',
      'label_position' => 'above',
      'label' => 'Birthday',
      'weight' => '-2',
      'description' => '',
      'type' => 'date_select',
      'module' => 'date',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Age');
  t('Birthday');

  return $fields;
}
