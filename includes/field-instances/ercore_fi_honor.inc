<?php
/**
 * @file
 * Includes array of ERCore Honors and Awards field instances.
 */

$ercore_honor_instances = array(
  // INSTANCE: field_ercore_hn_date
  'field_ercore_hn_date' => array(
    'label' => 'Date Awarded',
    'widget' => array(
      'weight' => '-1',
      'type' => 'date_popup',
      'module' => 'date',
      'active' => 1,
      'settings' => array(
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'year_range' => '-3:+3',
        'increment' => '15',
        'label_position' => 'above',
        'text_parts' => array(),
        'display_all_day' => 0,
        'repeat_collapsed' => 0,
      ),
    ),
    'settings' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '1',
        'settings' => array(
          'format_type' => 'ercore_date_format_month_day_year',
          'fromto' => 'both',
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
          'show_repeat_rule' => 'show',
        ),
        'module' => 'date',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '0',
        'settings' => array(
          'format_type' => 'ercore_date_format_month_day_year',
          'fromto' => 'both',
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
          'show_repeat_rule' => 'show',
        ),
        'module' => 'date',
      ),
      'teaser' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '0',
        'settings' => array(
          'format_type' => 'ercore_date_format_month_day_year',
          'fromto' => 'both',
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
          'show_repeat_rule' => 'show',
        ),
        'module' => 'date',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_hn_date',
    'entity_type' => 'node',
    'bundle' => 'ercore_j_honor',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_hn_organizer
  'field_ercore_hn_organizer' => array(
    'label' => 'EPSCoR Researcher(s)',
    'widget' => array(
      'weight' => '-3',
      'type' => 'entityreference_autocomplete',
      'module' => 'entityreference',
      'active' => 1,
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'size' => '60',
        'path' => '',
      ),
    ),
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'nodeaccess_userreference' => array(
        'referenced' => array(
          'view' => 'view',
          'update' => 'update',
          'delete' => 'delete',
          'deny_view' => 0,
          'deny_update' => 0,
          'deny_delete' => 0,
        ),
        'referenced_published' => '1',
        'create' => array(
          'er_collaboration' => 0,
          'ercore_event' => 0,
          'ercore_collaboration' => 0,
          'ercore_collaborator' => 0,
          'ercore_engagement' => 0,
          'ercore_j_highlight' => 0,
          'ercore_j_honor' => 0,
          'ercore_institution' => 0,
          'ercore_other_product' => 0,
          'ercore_patent' => 0,
          'ercore_presentation' => 0,
          'ercore_proposal' => 0,
          'ercore_publication' => 0,
        ),
        'author' => array(
          'view' => 'view',
          'update' => 'update',
          'delete' => 'delete',
        ),
        'author_published' => '1',
        'all' => array(
          'view' => 'view',
        ),
        'all_published' => '0',
        'unused' => '0',
        'views' => array(
          'view' => '',
          'view_args' => '',
        ),
        'priority' => '0',
      ),
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'entityreference_label',
        'weight' => '6',
        'settings' => array(
          'link' => 1,
        ),
        'module' => 'entityreference',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'entityreference_label',
        'weight' => '2',
        'settings' => array(
          'link' => FALSE,
        ),
        'module' => 'entityreference',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'entityreference_label',
        'weight' => '2',
        'settings' => array(
          'link' => 1,
        ),
        'module' => 'entityreference',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'default_value_function' => '',
    'field_name' => 'field_ercore_organizer',
    'entity_type' => 'node',
    'bundle' => 'ercore_j_honor',
    'deleted' => '0',
  ),
);
