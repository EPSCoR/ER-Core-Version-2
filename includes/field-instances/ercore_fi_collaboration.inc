<?php
/**
 * @file
 * Includes array of ERCore Collaboration field instances.
 */

$ercore_collaboration_instances = array(
// INSTANCE: field_ercore_cn_dates.
  'cn_field_ercore_cn_dates' => array(
    'label' => 'Collaboration Dates',
    'widget' => array(
      'weight' => '7',
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
        'repeat_collapsed' => 0,
        'display_all_day' => 0,
      ),
    ),
    'settings' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'strtotime',
      'default_value_code2' => '+ 1 year',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '0',
        'settings' => array(
          'format_type' => 'ercore_date_format_month_year',
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
          'format_type' => 'ercore_date_format_month_year',
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
          'format_type' => 'ercore_date_format_month_year',
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
    'field_name' => 'field_ercore_cn_dates',
    'entity_type' => 'node',
    'bundle' => 'ercore_collaboration',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_cn_collaborator.
  'cn_field_ercore_cn_collaborator' => array(
    'label' => 'External Collaborators',
    'widget' => array(
      'weight' => '5',
      'type' => 'field_collection_embed',
      'module' => 'field_collection',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'field_collection_fields',
        'weight' => '2',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'module' => 'field_collection',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'field_collection_fields',
        'weight' => '2',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'module' => 'field_collection',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'field_collection_fields',
        'weight' => '2',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'module' => 'field_collection',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_cn_collaborator',
    'entity_type' => 'node',
    'bundle' => 'ercore_collaboration',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_organizer.
  'cn_field_ercore_organizer' => array(
    'label' => 'EPSCoR Collaborator(s)',
    'widget' => array(
      'weight' => '4',
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
          'ercore_collaboration' => 'ercore_collaboration',
          'article' => 0,
          'page' => 0,
          'ercore_admin' => 0,
          'ercore_event' => 0,
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
        'weight' => '1',
        'settings' => array(
          'link' => 1,
        ),
        'module' => 'entityreference',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'entityreference_entity_view',
        'weight' => '1',
        'settings' => array(
          'view_mode' => 'user_institution',
          'links' => 1,
        ),
        'module' => 'entityreference',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'entityreference_entity_view',
        'weight' => '1',
        'settings' => array(
          'view_mode' => 'user_institution_link',
          'links' => 1,
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
    'bundle' => 'ercore_collaboration',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_components.
  'cn_field_ercore_components' => array(
    'label' => 'Components',
    'widget' => array(
      'weight' => '6',
      'type' => 'options_select',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'entityreference_label',
        'weight' => '3',
        'settings' => array(
          'link' => FALSE,
        ),
        'module' => 'entityreference',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '3',
        'settings' => array(),
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'entityreference_label',
        'weight' => '3',
        'settings' => array(
          'link' => FALSE,
        ),
        'module' => 'entityreference',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'default_value_function' => '',
    'field_name' => 'field_ercore_components',
    'entity_type' => 'node',
    'bundle' => 'ercore_collaboration',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_programs.
  'cn_field_ercore_programs' => array(
    'label' => 'Program',
    'widget' => array(
      'weight' => '2',
      'type' => 'options_select',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'behaviors' => array(
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'entityreference_label',
        'weight' => '4',
        'settings' => array(
          'link' => FALSE,
        ),
        'module' => 'entityreference',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'entityreference_label',
        'weight' => '4',
        'settings' => array(
          'link' => FALSE,
        ),
        'module' => 'entityreference',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '4',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'entityconnect_unload_add' => '1',
    'entityconnect_unload_edit' => '1',
    'entityconnect_show_add_icon' => '0',
    'entityconnect_show_edit_icon' => '0',
    'default_value' => NULL,
    'field_name' => 'field_ercore_programs',
    'entity_type' => 'node',
    'bundle' => 'ercore_collaboration',
    'deleted' => '0',
  ),
);
