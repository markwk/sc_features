<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function sc_news_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sc_news';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'sc_news' => 'sc_news',
        'sc_news:page_1' => 'sc_news:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'news',
  );
  $context->condition_mode = 0;

  $export['sc_news'] = $context;
  return $export;
}
