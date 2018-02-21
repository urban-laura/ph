<?php
/**
 * @file
 * theme-settings.php
 *
 * Provides theme settings for Ombak themes.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function ombak_form_system_theme_settings_alter(&$form, $form_state) {
  if (module_exists('search')) {
    $form['theme_settings']['top_bar_search'] = array(
      '#type' => 'checkbox',
      '#title' => t('Top bar search form'),
      '#default_value' => theme_get_setting('top_bar_search'),
    );
  }
}
