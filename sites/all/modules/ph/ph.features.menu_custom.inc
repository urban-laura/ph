<?php
/**
 * @file
 * ph.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ph_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-editot-menu.
  $menus['menu-editot-menu'] = array(
    'menu_name' => 'menu-editot-menu',
    'title' => 'Editor menu EN',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Editor menu EN');

  return $menus;
}
