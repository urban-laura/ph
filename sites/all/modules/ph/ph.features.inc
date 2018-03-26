<?php
/**
 * @file
 * ph.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ph_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ph_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_entityform_type().
 */
function ph_default_entityform_type() {
  $items = array();
  $items['form'] = entity_import('entityform_type', '{
    "type" : "form",
    "label" : "Form",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "\\/",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "Send message",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "3" : "3", "4" : "4", "2" : 0 },
      "resubmit_action" : "new",
      "redirect_path" : "node\\/51",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : { "source" : "eform\\/submit\\/form", "alias" : "form", "language" : "und" } }
  }');
  return $items;
}

/**
 * Implements hook_image_default_styles().
 */
function ph_image_default_styles() {
  $styles = array();

  // Exported image style: 1_nivo.
  $styles['1_nivo'] = array(
    'label' => '1 nivo',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 400,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: nivo_style.
  $styles['nivo_style'] = array(
    'label' => 'Nivo style',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1110,
          'height' => 555,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function ph_node_info() {
  $items = array(
    'about_us' => array(
      'name' => t('Introduction'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title (invisible)'),
      'help' => '',
    ),
    'connection' => array(
      'name' => t('Connection'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title (invisible)'),
      'help' => '',
    ),
    'nivo_slider' => array(
      'name' => t('Nivo Slider'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'one_nivo_slider' => array(
      'name' => t('One Nivo Slider'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title (invisible)'),
      'help' => '',
    ),
    'parameters' => array(
      'name' => t('Parameters'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title (invisible)'),
      'help' => '',
    ),
    'partners' => array(
      'name' => t('Partners'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title (invisible)'),
      'help' => '',
    ),
    'where_to_apply_' => array(
      'name' => t('Where to apply?'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title (invisible)'),
      'help' => '',
    ),
    'why' => array(
      'name' => t('Advantages'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title (invisible)'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
