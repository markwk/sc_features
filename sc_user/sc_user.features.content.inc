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
      'weight' => '2',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_bio
  $fields['profile-field_bio'] = array(
    'field_name' => 'field_bio',
    'type_name' => 'profile',
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
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_bio][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Bio',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
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
      'weight' => '1',
      'description' => '',
      'type' => 'date_select',
      'module' => 'date',
    ),
  );

  // Exported field: field_lang_fluent
  $fields['profile-field_lang_fluent'] = array(
    'field_name' => 'field_lang_fluent',
    'type_name' => 'profile',
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
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Arabic
Bengali
Dutch
English
French
Filipino
German
Hindi
Italian
Japanese
Korean
Mandarin Chinese
Norwegian
Pashto
Persian
Polish
Portuguese
Punjabi
Romanian
Russian
Spanish
Swedish
Tamil
Thai
Turkish
Ukrainian
Vietnamese
Other Language',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Fluent Languages',
      'weight' => '4',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_lang_study
  $fields['profile-field_lang_study'] = array(
    'field_name' => 'field_lang_study',
    'type_name' => 'profile',
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
    'multiple' => '1',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Arabic
Bengali
Dutch
English
French
Filipino
German
Hindi
Italian
Japanese
Korean
Mandarin Chinese
Norwegian
Pashto
Persian
Polish
Portuguese
Punjabi
Romanian
Russian
Spanish
Swedish
Tamil
Thai
Turkish
Ukrainian
Vietnamese
Other Language',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Languages I am studying',
      'weight' => '5',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_location
  $fields['profile-field_location'] = array(
    'field_name' => 'field_location',
    'type_name' => 'profile',
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
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_location][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Location',
      'weight' => '-1',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_name
  $fields['profile-field_name'] = array(
    'field_name' => 'field_name',
    'type_name' => 'profile',
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
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Full Name',
      'weight' => '-4',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_name_eng
  $fields['profile-field_name_eng'] = array(
    'field_name' => 'field_name_eng',
    'type_name' => 'profile',
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
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_name_eng][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'English Name',
      'weight' => '-2',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_name_first
  $fields['profile-field_name_first'] = array(
    'field_name' => 'field_name_first',
    'type_name' => 'profile',
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
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_name_first][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'First Name',
      'weight' => '-4',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_name_last
  $fields['profile-field_name_last'] = array(
    'field_name' => 'field_name_last',
    'type_name' => 'profile',
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
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_name_last][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Last Name (Family Name)',
      'weight' => '-3',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_nationality
  $fields['profile-field_nationality'] = array(
    'field_name' => 'field_nationality',
    'type_name' => 'profile',
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
    'allowed_values' => 'Afghan
Afrikaner
Albanian
Algerian
American
Andorran
Angolan
Argentine
Armenian
Aromanian
Aruban
Australian
Indigenous Australian
Austrian
Azeris
Bahamian
Bahrainis
Balochi
Bangladeshis
Barbadian
Belarusian
Belgian
Belizean
Boer
Bosnian
Brazilian
Breton
British
British Virgin Islander
Bulgarians
Burundian
Cambodian
Cameroonian
Canadian
Catalan
Cape Verdean
Chadian
Chilean
Chinese
Colombian
Comorian
Congolese
Croatian
Cuban
Cypriot
Turkish Cypriot
Czech
Dane
Dominican (Republic)
Dominican (Commonwealth)
Dutch
East Timorese
Ecuadorian
Egyptian
Emiratis
English
Eritrean
Estonian
Ethiopian
Finn
Finnish Swedish
Fijian
Filipino
French citizen
Georgian
German
Baltic German
Ghanaian
Gibraltar
Greek
Grenadian
Guatemalan
Guianese (French)
Guinean
Guinea-Bissau national
Guyanese
Haitian
Honduran
Hong Konger
Hungarian
Icelander
Indian
Indonesian
Iranian (Persian)
Iraqi
Irish
Israeli
Italian
Ivoirian
Jamaican
Japanese
Jordanian
Kazakh
Kenyan
Korean
Kosovo Albanian
Kuwaiti
Lao
Latvian
Lebanese
Liberian
Libyan
Liechtensteiner
Lithuanian
Luxembourger
Macedonian
Malawian
Malaysian
Maldivian
Malian
Maltese
Manx
Mauritian
Mexican
Moldovan
Moroccan
Mongolian
Montenegrin
Namibian
Nepalese
New Zealander (Kiwi)
Nicaraguan
Nigerien
Nigerian
Norwegian
Pakistani
Palauan
Palestinian
Panamanian
Papua New Guineans
Paraguayan
Peruvian
Pole
Portuguese
Puerto Rican
Quebecer
RÃ©unionnais
Romanian
Russian
Baltic Russian
Rwandan
Salvadoran
Saudi
Scot
Senegalese
Serb
Sicilian
Sierra Leonean
Singaporean
Slovak
Slovenes
Somali
South African
Spanish
Sri Lankan
Sudanese
Swede
Swiss
Syrian
Taiwanese
Tanzanian
Thai
Tibetan
Tobagonian
Trinidadian
Turk
Tuvaluan
Ugandan
Ukrainian
Uruguayan
Venezuelan
Vietnamese
Welsh
Yemeni
Zambian
Zimbabwean',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Nationality',
      'weight' => '3',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Age');
  t('Bio');
  t('Birthday');
  t('English Name');
  t('First Name');
  t('Fluent Languages');
  t('Full Name');
  t('Languages I am studying');
  t('Last Name (Family Name)');
  t('Location');
  t('Nationality');

  return $fields;
}
