<?php
/**
 * @file
 * Created by PhpStorm.
 * User: tschet
 * Date: 10/21/15
 * Time: 11:02 AM.
 */

/**
 * Generates start and end dates for views and displays
 * This is being used on the summary table (ercore-reporting.inc).
 */

function ercore_start_end_dates() {
  $ercore_date = variable_get('ercore_start_date');
  $argument_date_format = variable_get('date_format_ercore_date_format_filter');
  $default = date_create(implode('/', $ercore_date));
  $default_date['start'] = date_format($default, $argument_date_format);
  $default_date['end'] = date($argument_date_format, strtotime('+1 year'));
  return $default_date;
}

/**
 * Generates an array of reporting periods
 * This is being used on the summary table (ercore-reporting.inc).
 */

function ercore_select_list() {

  $display_date_format = variable_get('date_format_ercore_date_format_month_day_year');
  $zone = variable_get('date_default_timezone');

  $ranges = ercore_get_reporting_ranges();
  // This returns the list of available date ranges...
  $range = ercore_get_reporting_range();
  // Get the select reporting period, this defaults to the current reporting period if none was selected.
  $range_is_set = _reporting_range_is_set();
  // Was a reporting period selected, or is $range the default -- current reporting period.
  $select_list = array('Select');
  foreach ($ranges as $k => $v) {
    $select_list[] = date($display_date_format, $v[0]) . ' to ' . date($display_date_format, $v[1]);
    if ($range_is_set && $range == $v) {
      $selected = $k + 1;
    }
  }
  return $select_list;
}

/**
 * Generates a nested array of date ranges corresponding to the start and end of a valid reporting period.
 * This is primarily being used on the summary table (accomplishments.inc).
 */

function ercore_get_reporting_ranges() {
  static $ranges = array();
  if (!count($ranges)) {
    // Should only need to do this once
    // provide the default ranges
    // this code takes the start date provided in er.module file, and creates an array of date ranges.
    // it is assumed that the reporting periods start with whatever month the grant was awarded on.
    $start_date = variable_get('ercore_start_date');
    $reporting_month = intval(variable_get('ercore_reporting_month'));
    $cur_month = date('n');
    $adjusted_date = mktime(0, 0, 0, $cur_month - $reporting_month + 7);
    // +half a year into the future (6) +1 offset.
    $cur_year = date('Y', $adjusted_date);
    $start_year = $start_date['year'];
    for ($y = $cur_year; $y >= $start_year; $y--) {
      $ranges[] = _generate_reporting_range($y);
    }
  }
  return $ranges;
}

/**
 * Generates a date range corresponding to the starting date
 * The date values get set via the form seen on the summary table.
 */

function ercore_get_reporting_range($use_default = TRUE) {
  drupal_session_start();
  if (array_key_exists('ercore_start_date', $_SESSION) && array_key_exists('ercore_end_date', $_SESSION)) {
    return array($_SESSION['ercore_start_date'], $_SESSION['ercore_end_date']);
  }
  else {
    if ($use_default) {
      // $ranges = ercore_get_reporting_ranges();
      // return array_shift($ranges);
      $reporting_month = intval(variable_get('ercore_reporting_month'));
      $cur_month = date('n');
      $adjusted_date = mktime(0, 0, 0, $cur_month - $reporting_month - 5);
      // +half a year into the past (6) +1 offset.
      $year = date('Y', $adjusted_date);
      return _generate_reporting_range($year);
      // array(mktime(0, 0, 0, $reporting_month, 1, $cur_year), mktime(0, 0, 0, $reporting_month, 0, $cur_year+1));.
    }
    else {
      return FALSE;
    }
  }
}

/**
 * This returns a date range as a pair of unix timestamps in an array
 * If the year requested == the start year, use the exact start date rather than the standard reporting period.
 */
function _generate_reporting_range($year) {
  static $start_date;
  static $reporting_month;
  if (!isset($start_date)) {
    $start_date = variable_get('ercore_start_date');
  }
  if (!isset($reporting_month)) {
    $reporting_month = intval(variable_get('ercore_reporting_month'));
  }
  if ($year == $start_date['year']) {
    return array(
      mktime(0, 0, 0, $start_date['month'], $start_date['day'], $start_date['year']),
      mktime(0, 0, 0, $reporting_month, 0, $year + 1),
    );
  }
  else {
    return array(
      mktime(0, 0, 0, $reporting_month, 1, $year),
      mktime(0, 0, 0, $reporting_month, 0, $year + 1),
    );
  }
}

/**
 * Generates a nested array of date ranges corresponding to the start and end of a valid reporting period.
 * This is used primarily on the summary table.
 */

function _summary_table_ranges() {
  if ($range = ercore_get_reporting_range(FALSE)) {
    // Only if explicitly specified.
    return array($range);
  }
  else {
    // Only need to do this once.
    return ercore_get_reporting_ranges();
  }
}

/**
 *
 */
function _reporting_range_is_set() {
  return array_key_exists('ercore_start_date', $_SESSION) && array_key_exists('ercore_end_date', $_SESSION);
}

/**
 * Ajax callack function for er_date_range_form.
 * This gets fired when the select box is changed.
 */

function ercore_change_reporting_year($form, $form_state) {
  $ranges = ercore_get_reporting_ranges();
  $selected = $form_state['input']['reporting-year']['range'] - 1;
  if ($selected == -1) {
    unset($_SESSION['ercore_start_date']);
    unset($_SESSION['ercore_end_date']);
  }
  else {
    $_SESSION['ercore_start_date'] = $ranges[$selected][0];
    $_SESSION['ercore_end_date'] = $ranges[$selected][1];
    $ranges = array($ranges[$selected]);
  }

  $form['table']['#ranges'] = $ranges;
  return $form['table'];
}

/**
 * Ajax callack function for er_date_range_form.
 * This gets fired when the save button is clicked.
 * This updates the summary table when a date range is specified.
 */

function ercore_change_date_range($form, $form_state) {
  $ranges = array();
  if ($form_state['values']['op'] == t('Save')) {
    $s = strtotime($form_state['values']['dates']['start_date']);
    $e = strtotime($form_state['values']['dates']['end_date']);
    if ($s <= $e) {
      $_SESSION['ercore_start_date'] = $s;
      $_SESSION['ercore_end_date'] = $e;
      $ranges = array(array($s, $e));
    }
    else {
      drupal_set_message("Start date must be earlier than end date.", 'error');
    }
  }
  else {
    unset($_SESSION['ercore_start_date']);
    unset($_SESSION['ercore_end_date']);
    $ranges = _summary_table_ranges();
  }
  $form['table']['#ranges'] = $ranges;
  return $form['table'];
}

/**
 * This theme function (see theme.inc) generates the summary table.
 *
 * @param $ranges = a nested a array of date ranges
 * @param $debug = a flag which turns on debug messages
 */

function ercore_summary_table($variables) {
  $summary_values = variable_get('ercore_summary_types');
  $ranges = $variables['ranges'];
  $short_date = 'm/d/Y';

  $summary = array('#theme' => 'table');
  $summary['#header'][] = "Categories of Accomplishments";
  $summary['#header'][] = "Inception<br />through<br />" . date($short_date);
  foreach ($ranges as $k => $v) {
    $summary['#header'][] = date($short_date, $v[0]) . "<br />through<br />" . date($short_date, $v[1]);
  }

  if (isset($summary_values) && count($summary_values)) {
    foreach ($summary_values as $k => $type) {
      $data = array();
      $view_name = 'data_' . $type;
      if ($view = views_get_view($view_name)) {
        $view->set_display('count');
        $view->execute();
        $data[] = ercore_format_label($type, $view, $ranges);
        if (isset($view->result[0]->nid)) {
          $data[] = $view->result[0]->nid;
        }
        elseif (isset($view->result[0]->item_id)) {
          $data[] = $view->result[0]->item_id;
        }
        elseif (isset($view->result[0]->ui)) {
          $data[] = $view->result[0]->uid;
        }
        else {
          $data[] = 0;
        }
        foreach ($ranges as $k => $v) {
          $view = views_get_view($view_name);
          $view->set_display('count');
          $view->exposed_input['start_date']['value']['date'] = date('Y-m-d', $v[0]);
          $view->exposed_input['end_date']['value']['date'] = date('Y-m-d', $v[1]);
          $view->execute();
          $count = isset($view->result[0]->nid) ? $view->result[0]->nid : $view->result[0]->uid;
          // Count nodes or users.
          $data[] = $count > 0 ? $count : 0;
        }
      }
      else {
        drupal_set_message(t('View not found: @name', array('@name' => $view_name)), 'error');
      }
      $summary['#rows'][] = $data;
      // d($data, '$data');.
    }
  }
  else {
    $link = l('click here', 'admin/config/ercore/admin');
    $message = "An administrator needs to select which content types you want to see on the summary table! $link";
    drupal_set_message($message, 'error');
  }

  $range = ercore_get_reporting_range();
  $date_label = ' ('.date('n/j/y', $range[0]).' - '.date('n/j/y', $range[1]).')';
  $summary = array(
    'table' => $summary,
    'asterisk' => array(
      '#type' => 'markup',
      '#markup' => "* Grant & Proposal counts include all grants regardless of status.",
    ),
    'download' => array(
      '#type' => 'markup',
      '#access' => array('access ercore excel sheets'),
      '#markup' => '<p class="summary-download">' . ercore_download_link('Download EPSCoR Reporting Core Tables' . $date_label, 'excel') . "</p>",
    ),
  );

  return render($summary);
}

/**
 * This custom function generates summary table links to section reports.
 *
 * @param $type = a string values of section type value
 * @param $view = the View array that builds the summary table sections
 * @param $ranges = an optional array of date ranges to define link paths
 */


function ercore_format_label($type, &$view, &$ranges) {
  $argument_date_format = variable_get('date_format_ercore_date_format_filter');
  $report_title = $view->display['default']->handler->options['title'];

  if (isset($view->display['default']->display_options['footer']['area_text_custom']['content'])) {
    $report_link = $view->display['default']->display_options['footer']['area_text_custom']['content'];
  }
  else {
    $report_link = NULL;
  }

  if (isset($ranges[0][0])) {
    $start = date($argument_date_format, $ranges[0][0]);
    $end = date($argument_date_format, $ranges[0][1]);
    $destination = array(
      'query' => array(
        'start-date[value][date]' => $start,
        'end-date[value][date]' => $end,
      ),
    );
  }
  else {
    $destination = array('query' => NULL);
  }
  $title = l(t($report_title), $report_link, $destination, array('attributes' => array('class' => array('reporting-section'))));

  return $title;
}
