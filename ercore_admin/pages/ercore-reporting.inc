<?php
/**
 * @file
 * File for the ERCore Admin Guide Page.
 */

include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore_admin') . "/includes/ercore_admin_var.inc";
/**
 * Constructs the epscor admin guide.
 *
 * Our menu maps this function to the path 'epscor/admin-guide'.
 */
function ercore_reporting_callback($form_state) {
  $zone = variable_get('date_default_timezone');
  $ercore_date = variable_get('ercore_start_date');
  $argument_date_format = variable_get('date_format_ercore_date_format_filter');
  $date_year_range = $ercore_date['year'] . ':+1';
  $default_dates = ercore_start_end_dates();
  $select_list = ercore_select_list();

  $form = array();
  $form['reporting-year'] = array(
     '#type' => 'fieldset',
     '#title' => t('Reporting Year'),
     '#tree' => TRUE,
     '#attributes' => array('class' => array('fieldset-class')),
     '#collapsible' => TRUE,
     '#collapsed' => FALSE,
   );
   $form['reporting-year']['range'] = array(
     '#type' => 'select',
     '#title' => t('Reporting Period'),
     '#options' => $select_list,
     '#default_value' => 0,
     '#ajax' => array(
       'callback' => 'ercore_change_reporting_year',
       'wrapper' => 'ercore_summary_table',
       'method' => 'replace',
       'effect' => 'fade',
     ),
   );

   $form['dates'] = array(
     '#type' => 'fieldset',
     '#title' => t('Date range'),
     '#tree' => TRUE,
     '#attributes' => array('class' => array('fieldset-class')),
     '#collapsible' => TRUE,
     '#collapsed' => TRUE,
   );

   $form['dates']['start_date'] = array(
     '#type' => 'date_popup',
     '#title' => t('Start Date'),
     '#date_format' => $argument_date_format,
     '#default_value' => $default_dates['start'],
     '#date_timezone' => $zone,
     '#date_year_range' => $date_year_range,
     '#date_label_position' => 'none',
   );
  $form['dates']['end_date'] = array(
     '#type' => 'date_popup',
     '#title' => t('End Date'),
     '#date_format' => $argument_date_format,
     '#default_value' => $default_dates['end'],
     '#date_timezone' => $zone,
    '#date_year_range' => $date_year_range,
     '#date_label_position' => 'none',
   );
  $form['dates']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#ajax' => array(
      'callback' => 'ercore_change_date_range',
      'wrapper' => 'ercore_summary_table',
      'method' => 'replace',
      'effect' => 'fade',
    ),
  );
  $form['dates']['reset'] = array(
    '#type' => 'submit',
    '#value' => t('Reset'),
    '#ajax' => array(
      'callback' => 'ercore_change_date_range',
      'wrapper' => 'ercore_summary_table',
      'method' => 'replace',
      'effect' => 'fade',
    ),
  );
  $form['stuff'] = array(
    '#markup' => t('<p>Reporting text goes here.</p>'),
  );

  $form['table'] = array(
    '#theme' => 'ercore_summary_table',
    '#prefix' => '<div id="ercore_summary_table">',
    '#suffix' => '</div>',
  );
  return $form;

}
/**
 * ERCore Reporting submit callback.
 */
function ercore_reporting_callback_submit($form, &$form_state) {
  dpm($form);
  dpm($form_state);
  if ($form_state['clicked_button']['#id'] == 'edit-dates-reset'){
    unset($_SESSION['ercore_start_date']);
    unset($_SESSION['ercore_end_date']);
  }else{
    $s = strtotime($form['dates']['start_date']['#value']['date']);
    $e = strtotime($form['dates']['end_date']['#value']['date']);
    if ($s <= $e){
      $_SESSION['ercore_start_date'] = $s;
      $_SESSION['ercore_end_date'] = $e;
    }else{
      drupal_set_message("Start date must be earlier than end date.", 'error');
    }
  }
}
