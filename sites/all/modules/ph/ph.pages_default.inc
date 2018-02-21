<?php
/**
 * @file
 * ph.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ph_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = '';
  $page->path = 'front-page';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
          6 => 7,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'nivo_slider',
        ),
        'parent' => 'main',
      ),
      'nivo_slider' => array(
        'type' => 'region',
        'title' => '1',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'about_us',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'about_us' => array(
        'type' => 'region',
        'title' => '2',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'why',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'why' => array(
        'type' => 'region',
        'title' => '3',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'advantages',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'advantages' => array(
        'type' => 'region',
        'title' => '4',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'apply',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'apply' => array(
        'type' => 'region',
        'title' => '5',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '6',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'region',
        'title' => '6',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'entityform',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'entityform' => array(
        'type' => 'region',
        'title' => 'entityform',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'nivo_slider' => NULL,
      'about_us' => NULL,
      'why' => NULL,
      'advantages' => NULL,
      'apply' => NULL,
      6 => NULL,
      'entityform' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1de2cd2c-dfdd-4cd1-8ecb-57a6616b3436';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_front_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cf983f92-94de-448f-8a2f-ddcf499d8b01';
  $pane->panel = '6';
  $pane->type = 'views_panes';
  $pane->subtype = 'about_us-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'parameters',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cf983f92-94de-448f-8a2f-ddcf499d8b01';
  $display->content['new-cf983f92-94de-448f-8a2f-ddcf499d8b01'] = $pane;
  $display->panels['6'][0] = 'new-cf983f92-94de-448f-8a2f-ddcf499d8b01';
  $pane = new stdClass();
  $pane->pid = 'new-d8740fec-76c6-4881-bae1-b2a343e326fc';
  $pane->panel = 'about_us';
  $pane->type = 'views_panes';
  $pane->subtype = 'about_us-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'introduction',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd8740fec-76c6-4881-bae1-b2a343e326fc';
  $display->content['new-d8740fec-76c6-4881-bae1-b2a343e326fc'] = $pane;
  $display->panels['about_us'][0] = 'new-d8740fec-76c6-4881-bae1-b2a343e326fc';
  $pane = new stdClass();
  $pane->pid = 'new-d8be0a7e-8c0b-4a1e-933a-b75bd2c47387';
  $pane->panel = 'advantages';
  $pane->type = 'views_panes';
  $pane->subtype = 'about_us-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'advantages',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd8be0a7e-8c0b-4a1e-933a-b75bd2c47387';
  $display->content['new-d8be0a7e-8c0b-4a1e-933a-b75bd2c47387'] = $pane;
  $display->panels['advantages'][0] = 'new-d8be0a7e-8c0b-4a1e-933a-b75bd2c47387';
  $pane = new stdClass();
  $pane->pid = 'new-caee736a-54a8-415c-9a87-1b4c3b450e82';
  $pane->panel = 'apply';
  $pane->type = 'views_panes';
  $pane->subtype = 'about_us-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'apply',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'caee736a-54a8-415c-9a87-1b4c3b450e82';
  $display->content['new-caee736a-54a8-415c-9a87-1b4c3b450e82'] = $pane;
  $display->panels['apply'][0] = 'new-caee736a-54a8-415c-9a87-1b4c3b450e82';
  $pane = new stdClass();
  $pane->pid = 'new-53c0dd47-9b05-4e1c-9577-a5b81be47c22';
  $pane->panel = 'entityform';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<a class="simple-dialog" href="/node/25" name="load-this-element" rel="width:900;resizable:false;position:[center,60];" title="My Dialog Title">Click Me To See The Dialog</a>
',
    'format' => 'plain_text',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '53c0dd47-9b05-4e1c-9577-a5b81be47c22';
  $display->content['new-53c0dd47-9b05-4e1c-9577-a5b81be47c22'] = $pane;
  $display->panels['entityform'][0] = 'new-53c0dd47-9b05-4e1c-9577-a5b81be47c22';
  $pane = new stdClass();
  $pane->pid = 'new-b4e92334-be61-46c1-a4f5-88f5644d3329';
  $pane->panel = 'nivo_slider';
  $pane->type = 'views_panes';
  $pane->subtype = 'about_us-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b4e92334-be61-46c1-a4f5-88f5644d3329';
  $display->content['new-b4e92334-be61-46c1-a4f5-88f5644d3329'] = $pane;
  $display->panels['nivo_slider'][0] = 'new-b4e92334-be61-46c1-a4f5-88f5644d3329';
  $pane = new stdClass();
  $pane->pid = 'new-44857478-4e01-4ac7-8e53-4a150526f019';
  $pane->panel = 'why';
  $pane->type = 'views_panes';
  $pane->subtype = 'about_us-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'partners',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '44857478-4e01-4ac7-8e53-4a150526f019';
  $display->content['new-44857478-4e01-4ac7-8e53-4a150526f019'] = $pane;
  $display->panels['why'][0] = 'new-44857478-4e01-4ac7-8e53-4a150526f019';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
