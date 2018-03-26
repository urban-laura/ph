<?php
/**
 * @file
 * ph.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ph_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-editot-menu_advantages:node/25/edit/content.
  $menu_links['menu-editot-menu_advantages:node/25/edit/content'] = array(
    'menu_name' => 'menu-editot-menu',
    'link_path' => 'node/25/edit/content',
    'router_path' => 'node/%/edit',
    'link_title' => 'Advantages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-editot-menu_advantages:node/25/edit/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-editot-menu_connection:node/30/edit/content.
  $menu_links['menu-editot-menu_connection:node/30/edit/content'] = array(
    'menu_name' => 'menu-editot-menu',
    'link_path' => 'node/30/edit/content',
    'router_path' => 'node/%/edit',
    'link_title' => 'Connection',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-editot-menu_connection:node/30/edit/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-editot-menu_introduction:node/24/edit/content.
  $menu_links['menu-editot-menu_introduction:node/24/edit/content'] = array(
    'menu_name' => 'menu-editot-menu',
    'link_path' => 'node/24/edit/content',
    'router_path' => 'node/%/edit',
    'link_title' => 'Introduction',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-editot-menu_introduction:node/24/edit/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-editot-menu_parameters:node/29/edit/content.
  $menu_links['menu-editot-menu_parameters:node/29/edit/content'] = array(
    'menu_name' => 'menu-editot-menu',
    'link_path' => 'node/29/edit/content',
    'router_path' => 'node/%/edit',
    'link_title' => 'Parameters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-editot-menu_parameters:node/29/edit/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-editot-menu_partners:node/27/edit/content.
  $menu_links['menu-editot-menu_partners:node/27/edit/content'] = array(
    'menu_name' => 'menu-editot-menu',
    'link_path' => 'node/27/edit/content',
    'router_path' => 'node/%/edit',
    'link_title' => 'Partners',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-editot-menu_partners:node/27/edit/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-editot-menu_slider-image:node/26/edit/content.
  $menu_links['menu-editot-menu_slider-image:node/26/edit/content'] = array(
    'menu_name' => 'menu-editot-menu',
    'link_path' => 'node/26/edit/content',
    'router_path' => 'node/%/edit',
    'link_title' => 'Slider Image',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-editot-menu_slider-image:node/26/edit/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-editot-menu_where-to-apply:node/28/edit/content.
  $menu_links['menu-editot-menu_where-to-apply:node/28/edit/content'] = array(
    'menu_name' => 'menu-editot-menu',
    'link_path' => 'node/28/edit/content',
    'router_path' => 'node/%/edit',
    'link_title' => 'Where to apply?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-editot-menu_where-to-apply:node/28/edit/content',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Advantages');
  t('Connection');
  t('Introduction');
  t('Parameters');
  t('Partners');
  t('Slider Image');
  t('Where to apply?');

  return $menu_links;
}
