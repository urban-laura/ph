<?php

/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
  <div class="layout-container">
    <div class="contain-to-grid">
      <nav class="top-bar" role="navigation" data-topbar>
        <ul class="title-area">
          <?php if ($logo || $site_name): ?>
            <li class="name">
              <h1>
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
                  <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>"/>
                  <?php print $site_name ; ?>
                </a>
              </h1>
            </li>
          <?php endif; ?>

          <!-- Remove the class "menu-icon" to get rid of menu icon. Take out "Menu" to just have icon alone -->
          <li class="toggle-topbar menu-icon"><a href="#"><span>Menu</span></a></li>
        </ul>

        <?php if ($main_menu || $secondary_menu): ?>
          <section class="top-bar-section">
            <?php if ($topbar_search): ?>
              <ul class="right">
                <li class="has-form">
                  <?php print drupal_render($topbar_search); ?>
                </li>
              </ul>
            <?php endif; ?>
            <?php print drupal_render($main_menu); ?>
            <?php print drupal_render($secondary_menu); ?>
          </section>
        <?php endif; ?>
      </nav>
    </div>

    <?php print $breadcrumb; ?>

    <?php print $messages; ?>

    <?php if ($page['featured']): ?>
      <?php print render($page['featured']); ?>
    <?php endif; ?>

    <header role="banner">
      <div class="row">
        <?php if ($is_front && $site_slogan): ?>
          <div class="large-12 columns">
            <h2 class="subheader text-center"><?php print $site_slogan; ?></h2>
          </div>
        <?php endif; ?>
      </div>

      <?php print render($page['header']); ?>
    </header>

    <?php if ($page['preface_first'] || $page['preface_middle'] || $page['preface_last']): ?>
      <div id="preface-wrapper"><div id="preface" class="row">
        <?php print render($page['preface_first']); ?>
        <?php print render($page['preface_middle']); ?>
        <?php print render($page['preface_last']); ?>
      </div></div><!-- /#preface, /#preface-wrapper -->
    <?php endif; ?>

    <?php if ($page['highlighted']): ?>
      <?php print render($page['highlighted']); ?>
    <?php endif; ?>

    <main class="row" role="main">
      <a id="main-content"></a>

      <div<?php print $content_attributes; ?>>
        <?php print render($page['help']); ?>

        <?php if ($title): ?>
          <?php print render($title_prefix); ?>
            <h1><?php print $title; ?></h1>
          <?php print render($title_suffix); ?>
        <?php endif; ?>

        <?php print render($tabs); ?>

        <?php if ($action_links): ?>
          <nav class="action-links"><?php print render($action_links); ?></nav>
        <?php endif; ?>

        <?php print render($page['content']); ?>

        <?php print $feed_icons; ?>
      </div><!-- /.layout-content -->

      <?php if ($page['sidebar_first']): ?>
        <aside<?php print $sidebar_first_attributes; ?>>
          <?php print render($page['sidebar_first']); ?>
        </aside>
      <?php endif; ?>

      <?php if ($page['sidebar_second']): ?>
        <?php print render($page['sidebar_second']); ?>
      <?php endif; ?>
    </main>

    <?php if ($page['content_bottom']): ?>
      <?php print render($page['content_bottom']); ?>
    <?php endif; ?>

    <?php if ($page['triptych_first'] || $page['triptych_middle'] || $page['triptych_last']): ?>
      <div id="triptych-wrapper"><aside id="triptych" class="row" role="complementary">
        <?php print render($page['triptych_first']); ?>
        <?php print render($page['triptych_middle']); ?>
        <?php print render($page['triptych_last']); ?>
      </aside></div><!-- /#triptych, /#triptych-wrapper -->
    <?php endif; ?>

    <?php if ($page['footer_firstcolumn'] || $page['footer_secondcolumn'] || $page['footer_thirdcolumn'] || $page['footer_fourthcolumn']): ?>
      <div id="footer-columns-wrapper"><div id="footer-columns" class="row">
        <?php print render($page['footer_firstcolumn']); ?>
        <?php print render($page['footer_secondcolumn']); ?>
        <?php print render($page['footer_thirdcolumn']); ?>
        <?php print render($page['footer_fourthcolumn']); ?>
      </div></div><!-- /#footer-columns, /#footer-columns-wrapper -->
    <?php endif; ?>

    <?php if ($page['footer']): ?>
      <?php print render($page['footer']); ?>
    <?php endif; ?>

  </div><!-- /.layout-container -->
