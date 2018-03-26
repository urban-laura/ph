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
          0 => 1,
          1 => 2,
          2 => 3,
          3 => 4,
          4 => 7,
          5 => 8,
        ),
        'parent' => 'canvas',
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
        'title' => 'Editor menu',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'editor_menu',
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
        'title' => 'Language',
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
        'title' => 'Slider Image',
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
        'title' => 'Page content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'map_',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'map_' => array(
        'type' => 'region',
        'title' => 'map',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => 'footer',
        'hide_empty' => 0,
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'Footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
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
      'vonal' => NULL,
      'main_menu' => NULL,
      'map' => NULL,
      'map_' => NULL,
      'footer' => NULL,
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
  $pane->pid = 'new-70f87ed6-a394-4590-a6b1-ddc53a7610ee';
  $pane->panel = 'about_us';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-editor-menu-hu';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'hu' => 'hu',
            'default' => 0,
            'en' => 0,
            'de' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '70f87ed6-a394-4590-a6b1-ddc53a7610ee';
  $display->content['new-70f87ed6-a394-4590-a6b1-ddc53a7610ee'] = $pane;
  $display->panels['about_us'][0] = 'new-70f87ed6-a394-4590-a6b1-ddc53a7610ee';
  $pane = new stdClass();
  $pane->pid = 'new-0caca72f-4374-4997-9a8b-729df6131b13';
  $pane->panel = 'about_us';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-editot-menu';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'de' => 0,
            'hu' => 0,
          ),
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '0caca72f-4374-4997-9a8b-729df6131b13';
  $display->content['new-0caca72f-4374-4997-9a8b-729df6131b13'] = $pane;
  $display->panels['about_us'][1] = 'new-0caca72f-4374-4997-9a8b-729df6131b13';
  $pane = new stdClass();
  $pane->pid = 'new-c6c547d2-3989-43d8-a93c-67f954e06998';
  $pane->panel = 'about_us';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-editor-menu-de';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'de' => 'de',
            'default' => 0,
            'en' => 0,
            'hu' => 0,
          ),
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c6c547d2-3989-43d8-a93c-67f954e06998';
  $display->content['new-c6c547d2-3989-43d8-a93c-67f954e06998'] = $pane;
  $display->panels['about_us'][2] = 'new-c6c547d2-3989-43d8-a93c-67f954e06998';
  $pane = new stdClass();
  $pane->pid = 'new-b4e92334-be61-46c1-a4f5-88f5644d3329';
  $pane->panel = 'advantages';
  $pane->type = 'views_panes';
  $pane->subtype = 'about_us-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'slider',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b4e92334-be61-46c1-a4f5-88f5644d3329';
  $display->content['new-b4e92334-be61-46c1-a4f5-88f5644d3329'] = $pane;
  $display->panels['advantages'][0] = 'new-b4e92334-be61-46c1-a4f5-88f5644d3329';
  $pane = new stdClass();
  $pane->pid = 'new-d8740fec-76c6-4881-bae1-b2a343e326fc';
  $pane->panel = 'apply';
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
  $display->panels['apply'][0] = 'new-d8740fec-76c6-4881-bae1-b2a343e326fc';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'caee736a-54a8-415c-9a87-1b4c3b450e82';
  $display->content['new-caee736a-54a8-415c-9a87-1b4c3b450e82'] = $pane;
  $display->panels['apply'][1] = 'new-caee736a-54a8-415c-9a87-1b4c3b450e82';
  $pane = new stdClass();
  $pane->pid = 'new-d8be0a7e-8c0b-4a1e-933a-b75bd2c47387';
  $pane->panel = 'apply';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd8be0a7e-8c0b-4a1e-933a-b75bd2c47387';
  $display->content['new-d8be0a7e-8c0b-4a1e-933a-b75bd2c47387'] = $pane;
  $display->panels['apply'][2] = 'new-d8be0a7e-8c0b-4a1e-933a-b75bd2c47387';
  $pane = new stdClass();
  $pane->pid = 'new-44857478-4e01-4ac7-8e53-4a150526f019';
  $pane->panel = 'apply';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '44857478-4e01-4ac7-8e53-4a150526f019';
  $display->content['new-44857478-4e01-4ac7-8e53-4a150526f019'] = $pane;
  $display->panels['apply'][3] = 'new-44857478-4e01-4ac7-8e53-4a150526f019';
  $pane = new stdClass();
  $pane->pid = 'new-cf983f92-94de-448f-8a2f-ddcf499d8b01';
  $pane->panel = 'apply';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'cf983f92-94de-448f-8a2f-ddcf499d8b01';
  $display->content['new-cf983f92-94de-448f-8a2f-ddcf499d8b01'] = $pane;
  $display->panels['apply'][4] = 'new-cf983f92-94de-448f-8a2f-ddcf499d8b01';
  $pane = new stdClass();
  $pane->pid = 'new-c4c71550-a8bc-4a20-93e8-144a16cae1bd';
  $pane->panel = 'apply';
  $pane->type = 'views_panes';
  $pane->subtype = 'about_us-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'gallery',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'c4c71550-a8bc-4a20-93e8-144a16cae1bd';
  $display->content['new-c4c71550-a8bc-4a20-93e8-144a16cae1bd'] = $pane;
  $display->panels['apply'][5] = 'new-c4c71550-a8bc-4a20-93e8-144a16cae1bd';
  $pane = new stdClass();
  $pane->pid = 'new-4151ce9d-5d28-4bc6-a801-d2a7f3608b0d';
  $pane->panel = 'apply';
  $pane->type = 'views_panes';
  $pane->subtype = 'about_us-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'connection',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '4151ce9d-5d28-4bc6-a801-d2a7f3608b0d';
  $display->content['new-4151ce9d-5d28-4bc6-a801-d2a7f3608b0d'] = $pane;
  $display->panels['apply'][6] = 'new-4151ce9d-5d28-4bc6-a801-d2a7f3608b0d';
  $pane = new stdClass();
  $pane->pid = 'new-64581574-2ebb-42a1-af4f-34f9dd754830';
  $pane->panel = 'footer';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<table cellpadding="1" cellspacing="1">
	<tbody>
		<tr>
			<td style="vertical-align:middle"><a href="node/53" rel="lightframe"><span style="color:#ffffff">ÁSZF</span></a></td>
			<td class="rtecenter" style="vertical-align:middle"><a href="hu/sitemap.xml"><span style="color:#ffffff">XML</span></a></td>
			<td class="rteright" style="vertical-align:middle"><span style="color:#ffffff">©️ 2018&nbsp;</span> <span style="color:#e34309">Pannon</span><span style="color:#ffffff">Handel Zrt.</span></td>
		</tr>
	</tbody>
</table>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'my_footer',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '64581574-2ebb-42a1-af4f-34f9dd754830';
  $display->content['new-64581574-2ebb-42a1-af4f-34f9dd754830'] = $pane;
  $display->panels['footer'][0] = 'new-64581574-2ebb-42a1-af4f-34f9dd754830';
  $pane = new stdClass();
  $pane->pid = 'new-2e47b51c-016e-4020-8bc8-5602257612fd';
  $pane->panel = 'map_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'hu' => 'hu',
            'default' => 0,
            'en' => 0,
            'de' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Map HU',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><iframe frameborder="0" scrolling="no" src="https://maps.google.com/maps?&amp;hl=hu&amp;q=Magyarorsz%C3%A1g%20Buda%C3%B6rs%20Rep%C3%BCl%C5%91t%C3%A9ri%20%C3%BAt%206+(My%20Business%20Name)&amp;ie=UTF8&amp;t=&amp;z=14&amp;iwloc=B&amp;output=embed"></iframe></p>
',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'map',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2e47b51c-016e-4020-8bc8-5602257612fd';
  $display->content['new-2e47b51c-016e-4020-8bc8-5602257612fd'] = $pane;
  $display->panels['map_'][0] = 'new-2e47b51c-016e-4020-8bc8-5602257612fd';
  $pane = new stdClass();
  $pane->pid = 'new-05c249e9-a445-4e7f-90c0-0c48051ca2cb';
  $pane->panel = 'map_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'en' => 'en',
            'default' => 0,
            'de' => 0,
            'hu' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Map EN',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><iframe frameborder="0" scrolling="no" src="https://maps.google.com/maps?&amp;hl=en&amp;q=Magyarorsz%C3%A1g%20Buda%C3%B6rs%20Rep%C3%BCl%C5%91t%C3%A9ri%20%C3%BAt%206+(My%20Business%20Name)&amp;ie=UTF8&amp;t=&amp;z=14&amp;iwloc=B&amp;output=embed"></iframe></p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'map',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '05c249e9-a445-4e7f-90c0-0c48051ca2cb';
  $display->content['new-05c249e9-a445-4e7f-90c0-0c48051ca2cb'] = $pane;
  $display->panels['map_'][1] = 'new-05c249e9-a445-4e7f-90c0-0c48051ca2cb';
  $pane = new stdClass();
  $pane->pid = 'new-f9b536e2-4d90-4a13-b893-74756806e230';
  $pane->panel = 'map_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'site_language',
        'settings' => array(
          'language' => array(
            'de' => 'de',
            'default' => 0,
            'en' => 0,
            'hu' => 0,
          ),
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Map DE',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p><iframe frameborder="0" scrolling="no" src="https://maps.google.com/maps?&amp;hl=de&amp;q=Magyarorsz%C3%A1g%20Buda%C3%B6rs%20Rep%C3%BCl%C5%91t%C3%A9ri%20%C3%BAt%206+(My%20Business%20Name)&amp;ie=UTF8&amp;t=&amp;z=14&amp;iwloc=B&amp;output=embed"></iframe></p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'map',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f9b536e2-4d90-4a13-b893-74756806e230';
  $display->content['new-f9b536e2-4d90-4a13-b893-74756806e230'] = $pane;
  $display->panels['map_'][2] = 'new-f9b536e2-4d90-4a13-b893-74756806e230';
  $pane = new stdClass();
  $pane->pid = 'new-0b501649-f48a-4ce8-a93e-fc95249c4abc';
  $pane->panel = 'why';
  $pane->type = 'block';
  $pane->subtype = 'locale-language_content';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'icon',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0b501649-f48a-4ce8-a93e-fc95249c4abc';
  $display->content['new-0b501649-f48a-4ce8-a93e-fc95249c4abc'] = $pane;
  $display->panels['why'][0] = 'new-0b501649-f48a-4ce8-a93e-fc95249c4abc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
