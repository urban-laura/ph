<?php

/**
 * @file
 * Functions to support theming in the Ombak theme.
 */

/**
 * Implements THEME_button().
 */
function ombak_button($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'submit';
  element_set_attributes($element, array('id', 'name', 'value'));

  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'form-button-disabled';
  }

  return '<button' . drupal_attributes($element['#attributes']) . '>' . $element['#value'] . '</button>';
}

/**
 * Implements THEME_button().
 */
function ombak_button__submit__topbar($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'submit';
  element_set_attributes($element, array('id', 'name', 'value'));

  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'form-button-disabled';
  }

  return '<button' . drupal_attributes($element['#attributes']) . '><span class="fa fa-search"></span></button>';
}

/**
 * Implements THEME_form().
 */
function ombak_form($variables) {
  $element = $variables['element'];
  if (isset($element['#action'])) {
    $element['#attributes']['action'] = drupal_strip_dangerous_protocols($element['#action']);
  }
  element_set_attributes($element, array('method', 'id'));
  if (empty($element['#attributes']['accept-charset'])) {
    $element['#attributes']['accept-charset'] = "UTF-8";
  }
  // Anonymous DIV to satisfy XHTML compliance.
  return '<form' . drupal_attributes($element['#attributes']) . '>' . $element['#children'] . '</form>';
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function ombak_form_search_block_form_alter(&$form, &$form_state) {
  if (!empty($form_state['build_info']['args'][0]['top_bar'])) {
    $fontawesome = '//maxcdn.bootstrapcdn.com/font-awesome/4.1.0/css/font-awesome.min.css';

    $form['#attributes']['class'][] = 'row';
    $form['#attributes']['class'][] = 'collapse';

    $form['search_block_form']['#attributes']['placeholder'] = $form['search_block_form']['#title'];
    $form['search_block_form']['#prefix'] = '<div class="medium-9 small-10 columns">';
    $form['search_block_form']['#suffix'] = '</div>';

    $form['actions']['#prefix'] = '<div class="medium-3 small-2 columns">';
    $form['actions']['#suffix'] = '</div>';
    $form['actions']['submit']['#attributes']['class'][] = 'expand';
    $form['actions']['submit']['#theme_wrappers'] = array('button__submit__topbar');
    $form['actions']['submit']['#attached']['css'][$fontawesome] = array('type' => 'external');

    unset($form['#theme']);
  }
}

/**
 * Implements THEME_item_list().
 */
function ombak_item_list__pager($variables) {
  $items = $variables['items'];
  $title = $variables['title'];
  $type = $variables['type'];
  $attributes = $variables['attributes'];

  // Only output the list container and title, if there are any list items.
  // Check to see whether the block title exists before adding a header.
  // Empty headers are not semantic and present accessibility challenges.
  $output = '<div class="pagination-centered">';
  if (isset($title) && $title !== '') {
    $output .= '<h3>' . $title . '</h3>';
  }

  if (!empty($items)) {
    $output .= "<$type" . drupal_attributes($attributes) . '>';
    $num_items = count($items);
    $i = 0;
    foreach ($items as $item) {
      $attributes = array();
      $children = array();
      $data = '';
      $i++;
      if (is_array($item)) {
        foreach ($item as $key => $value) {
          if ($key == 'data') {
            $data = $value;
          }
          elseif ($key == 'children') {
            $children = $value;
          }
          else {
            $attributes[$key] = $value;
          }
        }
      }
      else {
        $data = $item;
      }
      if (count($children) > 0) {
        // Render nested list.
        $data .= theme_item_list(array('items' => $children, 'title' => NULL, 'type' => $type, 'attributes' => $attributes));
      }
      if ($i == 1) {
        $attributes['class'][] = 'first';
      }
      if ($i == $num_items) {
        $attributes['class'][] = 'last';
      }
      $output .= '<li' . drupal_attributes($attributes) . '>' . $data . "</li>\n";
    }
    $output .= "</$type>";
  }
  $output .= '</div>';
  return $output;
}

/**
 * Implements THEME_menu_local_task().
 */
function ombak_menu_local_task($variables) {
  $link = $variables['element']['#link'];
  $link_text = $link['title'];

  if (!empty($variables['element']['#active'])) {
    // Add text to indicate active tab for non-visual users.
    $active = '<span class="element-invisible">' . t('(active tab)') . '</span>';

    // If the link does not contain HTML already, check_plain() it now.
    // After we set 'html'=TRUE the link will not be sanitized by l().
    if (empty($link['localized_options']['html'])) {
      $link['title'] = check_plain($link['title']);
    }
    $link['localized_options']['html'] = TRUE;
    $link_text = t('!local-task-title!active', array('!local-task-title' => $link['title'], '!active' => $active));
  }

  return '<li class="tab-title' . (!empty($variables['element']['#active']) ? ' active' : '') . '"">' . l($link_text, $link['href'], $link['localized_options']) . "</li>\n";
}

/**
 * Implements THEME_menu_tree().
 */
function ombak_menu_tree__main_menu($variables) {
  return '<ul class="right">' . $variables['tree'] . '</ul>';
}

/**
 * Implements THEME_menu_tree().
 */
function ombak_menu_tree__secondary_menu($variables) {
  return '<ul class="left">' . $variables['tree'] . '</ul>';
}

/**
 * Implements THEME_menu_tree().
 */
function ombak_menu_tree__dropdown($variables) {
  return '<ul class="dropdown">' . $variables['tree'] . '</ul>';
}

/**
 * Implements THEME_pager().
 */
function ombak_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('« first')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('last »')), 'element' => $element, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('arrow'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('unavailable'),
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('current'),
            'data' => '<a href="#">' . $i . '</a>',
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('unavailable'),
          'data' => '…',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('arrow'),
        'data' => $li_last,
      );
    }
    return '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list__pager', array(
      'items' => $items,
      'attributes' => array('class' => array('pagination')),
    ));
  }
}

/**
 * Implements hook_preprocess_HOOK() for theme_menu_link.
 */
function ombak_preprocess_menu_link(&$variables) {
  $active_trail = menu_get_active_trail();
  $original = $variables['element']['#original_link'];

  foreach ($active_trail as $trail) {
    if (!empty($trail['mlid']) && $trail['mlid'] == $original['mlid']) {
      $variables['element']['#attributes']['class'][] = 'active';
    }
  }

  if (!empty($variables['element']['#below'])) {
    $variables['element']['#attributes']['class'][] = 'has-dropdown';
  }
}

/**
 * Implements hook_preprocess_page().
 */
function ombak_preprocess_page(&$variables) {
  if (module_exists('search') && theme_get_setting('top_bar_search')) {
    $variables['topbar_search'] = drupal_get_form('search_block_form', array('top_bar' => TRUE));
  }

  $menu_main_links_source = variable_get('menu_main_links_source', 'main-menu');
  $menu_secondary_links_source = variable_get('menu_secondary_links_source', 'user-menu');

  foreach (array('main', 'secondary') as $menu) {
    if ($variables[$menu . '_menu']) {
      $source = ${'menu_' . $menu . '_links_source'};
      $tree = menu_build_tree($source);
      $variables[$menu . '_menu'] = menu_tree_output($tree);

      foreach(element_children($variables[$menu . '_menu']) as $children) {
        if (!empty($variables[$menu . '_menu'][$children]['#below'])) {
          $variables[$menu . '_menu'][$children]['#below']['#theme_wrappers'] = array('menu_tree__dropdown');
        }
      }
    }
  }

  if ($variables['page']['sidebar_first']) {
    $variables['sidebar_first_attributes_array'] = array('class' => array('large-3'));
    if ($variables['page']['sidebar_second']) {
      $variables['content_attributes_array']['class'][] = 'large-6';
      $variables['sidebar_first_attributes_array']['class'][] = 'large-pull-6';
    }
    else {
      $variables['content_attributes_array']['class'][] = 'large-9';
      $variables['sidebar_first_attributes_array']['class'][] = 'large-pull-9';
    }
    $variables['content_attributes_array']['class'][] = 'large-push-3';

    $variables['sidebar_first_attributes_array']['class'][] = 'columns';
    $variables['sidebar_first_attributes_array']['role'] = 'complementary';
  }
  elseif ($variables['page']['sidebar_second']) {
    $variables['content_attributes_array']['class'][] = 'large-9';
  }
  else {
    $variables['content_attributes_array']['class'][] = 'large-12';
  }
  $variables['content_attributes_array']['class'][] = 'columns';
}

/**
 * Implements hook_preprocess_region().
 */
function ombak_preprocess_region(&$variables) {
  // Region attributes and classes
  switch($variables['region']) {
    case 'help':
    case 'sidebar_first':
      break;

    case 'sidebar_second':
      $variables['classes_array'][] = 'large-3';
      $variables['classes_array'][] = 'columns';
      $variables['attributes_array']['role'] = 'complementary';
      break;

    case 'content':
      break;

    case 'preface_first':
    case 'preface_middle':
    case 'preface_last':
    case 'triptych_first':
    case 'triptych_middle':
    case 'triptych_last':
      $variables['classes_array'][] = 'large-4';
      $variables['classes_array'][] = 'columns';
      break;

    case 'footer_firstcolumn':
    case 'footer_secondcolumn':
    case 'footer_thirdcolumn':
    case 'footer_fourthcolumn':
      $variables['classes_array'][] = 'large-3';
      $variables['classes_array'][] = 'columns';
      break;

    default:
      $variables['classes_array'][] = 'large-12';
      $variables['classes_array'][] = 'columns';
      break;
  }

  // Region theme_hook_suggestions
  switch($variables['region']) {
    case 'preface_first':
    case 'preface_middle':
    case 'preface_last':
      array_unshift($variables['theme_hook_suggestions'], 'region__preface');
      break;

    case 'help':
    case 'content':
    case 'sidebar_first':
    case 'sidebar_second':
      break;

    case 'triptych_first':
    case 'triptych_middle':
    case 'triptych_last':
      array_unshift($variables['theme_hook_suggestions'], 'region__triptych');
      break;

    case 'footer_firstcolumn':
    case 'footer_secondcolumn':
    case 'footer_thirdcolumn':
    case 'footer_fourthcolumn':
      array_unshift($variables['theme_hook_suggestions'], 'region__footer_column');
      break;

    default:
      $variables['html_id'] = drupal_html_id($variables['region']);
      array_unshift($variables['theme_hook_suggestions'], 'region__wrapper');
      break;
  }
}

/**
 * Implements hook_process_page().
 */
function ombak_process_page(&$variables) {
  $variables['sidebar_first_attributes'] = drupal_attributes($variables['sidebar_first_attributes_array']);
}

function ombak_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $type_class = array(
    'status' => 'success',
    'warning' => 'warning',
    'error' => 'alert',
  );

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= '<div class="row"><div class="large-12 columns">' . "\n";
    $output .= '<div data-alert class="alert-box ' . $type_class[$type] . '" role="contentinfo" aria-label=" ' . $status_heading[$type] . '">' . "\n";
    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
    }
    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= $messages[0];
    }
    $output .= '<a href="#" class="close">&times;</a>' . "\n";
    $output .= "</div>\n</div></div>\n";
  }
  return $output;
}

