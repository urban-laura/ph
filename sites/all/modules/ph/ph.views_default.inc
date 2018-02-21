<?php
/**
 * @file
 * ph.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ph_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'about_us';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'About_us';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Text */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'about_us' => 'about_us',
  );

  /* Display: Introduction */
  $handler = $view->new_display('panel_pane', 'Introduction', 'panel_pane_1');

  /* Display: Advantages */
  $handler = $view->new_display('panel_pane', 'Advantages', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Text */
  $handler->display->display_options['fields']['field_why_text']['id'] = 'field_why_text';
  $handler->display->display_options['fields']['field_why_text']['table'] = 'field_data_field_why_text';
  $handler->display->display_options['fields']['field_why_text']['field'] = 'field_why_text';
  $handler->display->display_options['fields']['field_why_text']['label'] = '';
  $handler->display->display_options['fields']['field_why_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'why' => 'why',
  );

  /* Display: One Nivo Slider */
  $handler = $view->new_display('panel_pane', 'One Nivo Slider', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: One Nivo Slider Image */
  $handler->display->display_options['fields']['field_one_nivo_slider_image']['id'] = 'field_one_nivo_slider_image';
  $handler->display->display_options['fields']['field_one_nivo_slider_image']['table'] = 'field_data_field_one_nivo_slider_image';
  $handler->display->display_options['fields']['field_one_nivo_slider_image']['field'] = 'field_one_nivo_slider_image';
  $handler->display->display_options['fields']['field_one_nivo_slider_image']['label'] = '';
  $handler->display->display_options['fields']['field_one_nivo_slider_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_one_nivo_slider_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_one_nivo_slider_image']['settings'] = array(
    'image_style' => '1_nivo',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'one_nivo_slider' => 'one_nivo_slider',
  );

  /* Display: Partners */
  $handler = $view->new_display('panel_pane', 'Partners', 'panel_pane_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Text */
  $handler->display->display_options['fields']['field_text_partners']['id'] = 'field_text_partners';
  $handler->display->display_options['fields']['field_text_partners']['table'] = 'field_data_field_text_partners';
  $handler->display->display_options['fields']['field_text_partners']['field'] = 'field_text_partners';
  $handler->display->display_options['fields']['field_text_partners']['label'] = '';
  $handler->display->display_options['fields']['field_text_partners']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'partners' => 'partners',
  );

  /* Display: Apply */
  $handler = $view->new_display('panel_pane', 'Apply', 'panel_pane_5');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Text_apply */
  $handler->display->display_options['fields']['field_text_apply']['id'] = 'field_text_apply';
  $handler->display->display_options['fields']['field_text_apply']['table'] = 'field_data_field_text_apply';
  $handler->display->display_options['fields']['field_text_apply']['field'] = 'field_text_apply';
  $handler->display->display_options['fields']['field_text_apply']['label'] = '';
  $handler->display->display_options['fields']['field_text_apply']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'where_to_apply_' => 'where_to_apply_',
  );

  /* Display: Parameters */
  $handler = $view->new_display('panel_pane', 'Parameters', 'panel_pane_6');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Text */
  $handler->display->display_options['fields']['field_text_parameters']['id'] = 'field_text_parameters';
  $handler->display->display_options['fields']['field_text_parameters']['table'] = 'field_data_field_text_parameters';
  $handler->display->display_options['fields']['field_text_parameters']['field'] = 'field_text_parameters';
  $handler->display->display_options['fields']['field_text_parameters']['label'] = '';
  $handler->display->display_options['fields']['field_text_parameters']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'parameters' => 'parameters',
  );
  $translatables['about_us'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Introduction'),
    t('View panes'),
    t('Advantages'),
    t('One Nivo Slider'),
    t('Partners'),
    t('Parameters'),
  );
  $export['about_us'] = $view;

  $view = new view();
  $view->name = 'nivo_slider';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nivo Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_nivo_slider';
  $handler->display->display_options['style_options']['style'] = 'my_default';
  $handler->display->display_options['style_options']['effect'] = array(
    'fade' => 'fade',
  );
  $handler->display->display_options['style_options']['controlNav'] = 'basic';
  $handler->display->display_options['style_options']['controlNavThumbsField'] = 'title';
  $handler->display->display_options['style_options']['controlNavThumbsIC'] = 'thumbnail';
  $handler->display->display_options['style_options']['advanced_settings'] = array(
    'toggle_bc' => 0,
    'beforeChange' => '',
    'toggle_ac' => 0,
    'afterChange' => '',
    'toggle_sse' => 0,
    'slideshowEnd' => '',
    'toggle_ls' => 0,
    'lastSlide' => '',
    'toggle_al' => 0,
    'afterLoad' => '',
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nivo Slider Image */
  $handler->display->display_options['fields']['field_nivo_slider_image']['id'] = 'field_nivo_slider_image';
  $handler->display->display_options['fields']['field_nivo_slider_image']['table'] = 'field_data_field_nivo_slider_image';
  $handler->display->display_options['fields']['field_nivo_slider_image']['field'] = 'field_nivo_slider_image';
  $handler->display->display_options['fields']['field_nivo_slider_image']['label'] = '';
  $handler->display->display_options['fields']['field_nivo_slider_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nivo_slider_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nivo_slider_image']['settings'] = array(
    'image_style' => 'nivo_style',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nivo_slider' => 'nivo_slider',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['nivo_slider'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content pane'),
    t('View panes'),
  );
  $export['nivo_slider'] = $view;

  return $export;
}
