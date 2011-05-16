<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function sc_blogger_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:blog
  $menu_links['primary-links:blog'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blogs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Blogs');


  return $menu_links;
}
