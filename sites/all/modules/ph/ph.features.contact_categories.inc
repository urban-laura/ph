<?php
/**
 * @file
 * ph.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function ph_contact_categories_defaults() {
  return array(
    'Editor' => array(
      'category' => 'Editor',
      'recipients' => 'urban.laura97@gmail.com',
      'reply' => '',
      'weight' => 0,
      'selected' => 0,
    ),
  );
}
