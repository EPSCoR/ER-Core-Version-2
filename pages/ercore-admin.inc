<?php
/**
 * @file
 * ERCore Admin page content.
 */

/**
 * ERCore settings callback.
 */
function ercore_settings_callback() {
  $default_types = ercore_default_accomplishment_content_types();
  $types = variable_get('ercore_summary_types');
  if (!$types) {
    $types = array();
  }
  $start_date = variable_get('ercore_start_date');
  $reporting_month = variable_get('ercore_reporting_month');
  $default_grant_number = variable_get('ercore_grant_number');
  $component_usage = variable_get('ercore_component_usage');
  $component_required = variable_get('ercore_component_required');
  $program_usage = variable_get('ercore_program_usage');
  $program_required = variable_get('ercore_program_required');

  $form['help_description'] = array(
    '#type' => 'item',
    '#title' => 'Notice:',
    '#markup' => t("You may want to take a look at ERCore's <a href='/ercore'>
documentation</a>."),
  );

  $form['ercore_start_date'] = array(
    '#type' => 'date',
    '#date_format' => 'Y m d',
    '#title' => t('Start Date of EPSCoR Grant:'),
    '#default_value' =>
    $start_date ? $start_date : array(
      'year' => '2015',
      'month' => '01',
      'day' => '01',
    ),
    '#description' => t('This date will be used as the start of the grant.
    This effects the date ranges shown on the accomplishments table.'),
    '#required' => TRUE,
  );

  $form['ercore_reporting_month'] = array(
    '#type' => 'date_select',
    '#date_format' => 'm',
  // '#date_type' => DATE_ISO,.
    '#title' => t('Reporting Period starting month:'),
    '#default_value' => $reporting_month ? '0000-' . $reporting_month : NULL,
    '#description' => t('When does your reporting period begin?
    This is probably the same month as the start date of the grant.'),
    '#required' => TRUE,
  );
  $form['ercore_grant_number'] = array(
    '#type' => 'textfield',
    '#title' => t('EPSCoR Grant Number'),
    '#default_value' => $default_grant_number,
    '#description' => t('EPSCoR or NSF Grant Number'),
    '#required' => TRUE,
  );
  $form['ercore_summary_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Summary Table Content:'),
    '#default_value' => $types,
    '#options' => $default_types,
    '#multiple' => TRUE,
    '#description' => t(
      'Select the content types that you want to be displayed on the summary
      table. Each content type must have a corresponding view set up in order
      for it to be displayed in the summary table.'),
  );
  $form['ercore_component_usage'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use Components Taxonomy'),
    '#default_value' => $component_usage,
  );
  $form['ercore_component_required'] = array(
    '#type' => 'checkbox',
    '#title' => t('Require Component taxonomy fields'),
    '#default_value' => $component_required,
  );
  $form['ercore_program_usage'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use Program Taxonomy'),
    '#default_value' => $program_usage,
  );
  $form['ercore_program_required'] = array(
    '#type' => 'checkbox',
    '#title' => t('Require Program taxonomy fields'),
    '#default_value' => $program_required,
  );
  return system_settings_form($form);
}
/**
 * A list of content types to populate the accomplishment table.
 */
function ercore_default_accomplishment_content_types() {
  static $default_types = array(
    'ercore_collaboration' => 'ERCore: Collaborations',
    'ercore_event' => 'ERCore: Events',
    'ercore_engagement' => 'ERCore: External Engagements',
    'ercore_highlight' => 'ERCore: Highlights',
    'ercore_honor' => 'ERCore: Honors and Awards',
    'ercore_institution' => 'ERCore: Institutions',
    'ercore_other_product' => 'ERCore: Other Research Products',
    'ercore_participant' => 'ERCore: Participants',
    'ercore_patent' => 'ERCore: Patents',
    'ercore_presentation' => 'ERCore: Presentations',
    'ercore_proposal' => 'ERCore: Proposal and Grants',
    'ercore_publication' => 'ERCore: Publication',
  );
  return $default_types;
}
