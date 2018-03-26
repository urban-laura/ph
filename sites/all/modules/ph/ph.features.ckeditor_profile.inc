<?php
/**
 * @file
 * ph.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function ph_ckeditor_profile_defaults() {
  $data = array(
    'Advanced' => array(
      'name' => 'Advanced',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Source\'],
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'-\',\'SpellChecker\',\'Scayt\'],
    [\'Undo\',\'Redo\'],
    [\'Image\',\'Table\',\'HorizontalRule\',\'SpecialChar\'],
    \'/\',
    [\'Format\'],
    [\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'-\',\'Subscript\',\'Superscript\',\'-\',\'RemoveFormat\'],
    [\'NumberedList\',\'BulletedList\',\'-\',\'Outdent\',\'Indent\',\'Blockquote\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\'],
    [\'Link\',\'Unlink\'],
    \'/\',
    [\'Styles\',\'TextColor\',\'BGColor\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'button' => array(
            'name' => 'button',
            'desc' => 'Plugin file: button',
            'path' => '%plugin_dir%button/',
            'buttons' => array(
              'MyBold' => array(
                'label' => 'MyBold',
                'icon' => 'icons/mybold.png',
              ),
            ),
            'default' => 'f',
          ),
          'colorbutton' => array(
            'name' => 'colorbutton',
            'desc' => 'Plugin file: colorbutton',
            'path' => '%plugin_dir%colorbutton/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'mediaembed' => array(
            'name' => 'mediaembed',
            'desc' => 'Plugin for embedding HTML snippets',
            'path' => '%plugin_dir%mediaembed/',
            'buttons' => array(
              'MediaEmbed' => array(
                'label' => 'MediaEmbed',
                'icon' => 'images/icon.png',
              ),
            ),
            'default' => 'f',
          ),
          'panelbutton' => array(
            'name' => 'panelbutton',
            'desc' => 'Plugin file: panelbutton',
            'path' => '%plugin_dir%panelbutton/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
        ),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
      ),
    ),
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'ckeditor_path' => '%l/ckeditor',
      ),
      'input_formats' => array(),
    ),
    'Full' => array(
      'name' => 'Full',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Source\',\'Iframe\',\'-\',\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'-\',\'SpellChecker\',\'Scayt\'],
    [\'Undo\',\'Redo\'],
    [\'Image\',\'Table\',\'HorizontalRule\',\'SpecialChar\'],
    \'/\',
    [\'Format\'],
    [\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'-\',\'Subscript\',\'Superscript\',\'-\',\'RemoveFormat\'],
    [\'NumberedList\',\'BulletedList\',\'-\',\'Outdent\',\'Indent\',\'Blockquote\'],
    [\'Link\',\'Unlink\'],
    \'/\',
    [\'Styles\',\'-\',\'Font\',\'FontSize\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\'],
    [\'TextColor\',\'BGColor\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'button' => array(
            'name' => 'button',
            'desc' => 'Plugin file: button',
            'path' => '%plugin_dir%button/',
            'buttons' => array(
              'MyBold' => array(
                'label' => 'MyBold',
                'icon' => 'icons/mybold.png',
              ),
            ),
            'default' => 'f',
          ),
          'colorbutton' => array(
            'name' => 'colorbutton',
            'desc' => 'Plugin file: colorbutton',
            'path' => '%plugin_dir%colorbutton/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'colordialog' => array(
            'name' => 'colordialog',
            'desc' => 'Plugin file: colordialog',
            'path' => '%plugin_dir%colordialog/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'dialog' => array(
            'name' => 'dialog',
            'desc' => 'Plugin file: dialog',
            'path' => '%plugin_dir%dialog/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'dialogui' => array(
            'name' => 'dialogui',
            'desc' => 'Plugin file: dialogui',
            'path' => '%plugin_dir%dialogui/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'fakeobjects' => array(
            'name' => 'fakeobjects',
            'desc' => 'Plugin file: fakeobjects',
            'path' => '%plugin_dir%fakeobjects/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'floatpanel' => array(
            'name' => 'floatpanel',
            'desc' => 'Plugin file: floatpanel',
            'path' => '%plugin_dir%floatpanel/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'font' => array(
            'name' => 'font',
            'desc' => 'Plugin file: font',
            'path' => '%plugin_dir%font/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'iframe' => array(
            'name' => 'iframe',
            'desc' => 'Plugin file: iframe',
            'path' => '%plugin_dir%iframe/',
            'buttons' => array(
              'Iframe' => array(
                'label' => 'Iframe',
                'icon' => 'icons/iframe.png',
              ),
            ),
            'default' => 'f',
          ),
          'iframedialog' => array(
            'name' => 'iframedialog',
            'desc' => 'Plugin file: iframedialog',
            'path' => '%plugin_dir%iframedialog/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'indent' => array(
            'name' => 'indent',
            'desc' => 'Plugin file: indent',
            'path' => '%plugin_dir%indent/',
            'buttons' => array(
              'Indent' => array(
                'label' => 'Indent',
                'icon' => 'icons/indent.png',
              ),
              'Outdent' => array(
                'label' => 'Outdent',
                'icon' => 'icons/outdent.png',
              ),
            ),
            'default' => 'f',
          ),
          'indentlist' => array(
            'name' => 'indentlist',
            'desc' => 'Plugin file: indentlist',
            'path' => '%plugin_dir%indentlist/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'justify' => array(
            'name' => 'justify',
            'desc' => 'Plugin file: justify',
            'path' => '%plugin_dir%justify/',
            'buttons' => array(
              'JustifyLeft' => array(
                'label' => 'JustifyLeft',
                'icon' => 'icons/justifyleft.png',
              ),
              'JustifyCenter' => array(
                'label' => 'JustifyCenter',
                'icon' => 'icons/justifycenter.png',
              ),
              'JustifyRight' => array(
                'label' => 'JustifyRight',
                'icon' => 'icons/justifyright.png',
              ),
              'JustifyBlock' => array(
                'label' => 'JustifyBlock',
                'icon' => 'icons/justifyblock.png',
              ),
            ),
            'default' => 'f',
          ),
          'list' => array(
            'name' => 'list',
            'desc' => 'Plugin file: list',
            'path' => '%plugin_dir%list/',
            'buttons' => array(
              'NumberedList' => array(
                'label' => 'NumberedList',
                'icon' => 'icons/numberedlist.png',
              ),
              'BulletedList' => array(
                'label' => 'BulletedList',
                'icon' => 'icons/bulletedlist.png',
              ),
            ),
            'default' => 'f',
          ),
          'listblock' => array(
            'name' => 'listblock',
            'desc' => 'Plugin file: listblock',
            'path' => '%plugin_dir%listblock/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'liststyle' => array(
            'name' => 'liststyle',
            'desc' => 'Plugin file: liststyle',
            'path' => '%plugin_dir%liststyle/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'panel' => array(
            'name' => 'panel',
            'desc' => 'Plugin file: panel',
            'path' => '%plugin_dir%panel/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'panelbutton' => array(
            'name' => 'panelbutton',
            'desc' => 'Plugin file: panelbutton',
            'path' => '%plugin_dir%panelbutton/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'richcombo' => array(
            'name' => 'richcombo',
            'desc' => 'Plugin file: richcombo',
            'path' => '%plugin_dir%richcombo/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
        ),
      ),
      'input_formats' => array(
        'full_html' => 'Full HTML',
      ),
    ),
  );
  return $data;
}
