<?php
/**
 * @file
 * Includes array of ERCore Presentation field instances.
 */

$ercore_presentation_instances = array(
// INSTANCE: field_ercore_ps_event.
  'ps_field_ercore_ps_event' => array(
    'weight' => '-10',
    'label' => 'What was the event where you presented?',
    'widget_type' => 'text_textarea',
    'description' => 'Please provide the name of the event, where it was held, and any other significant identifying information.',
    'default_value' => NULL,
    'widget' => array(
      'weight' => '8',
      'type' => 'text_textarea',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => '4',
      ),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '3',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '9',
        'settings' => array(),
        'module' => 'text',
      ),
      'default' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '5',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'required' => 0,
    'field_name' => 'field_ercore_ps_event',
    'entity_type' => 'node',
    'bundle' => 'ercore_presentation',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ps_link.
  'ps_field_ercore_ps_link' => array(
    'weight' => '-9',
    'label' => 'Presentation Link',
    'widget_type' => 'link',
    'description' => 'Please enter the URL if your presentation is hosted online.',
    'default_value' => NULL,
    'widget' => array(
      'weight' => '9',
      'type' => 'link_field',
      'module' => 'link',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'link_default',
        'weight' => '4',
        'settings' => array(),
        'module' => 'link',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'link_default',
        'weight' => '3',
        'settings' => array(),
        'module' => 'link',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'link_default',
        'weight' => '9',
        'settings' => array(),
        'module' => 'link',
      ),
    ),
    'settings' => array(
      'absolute_url' => 1,
      'validate_url' => 1,
      'url' => 0,
      'title' => 'optional',
      'title_value' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => '128',
      'enable_tokens' => 1,
      'display' => array(
        'url_cutoff' => '80',
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => '',
        'configurable_class' => 0,
        'class' => '',
        'configurable_title' => 0,
        'title' => '',
      ),
      'rel_remove' => 'default',
      'user_register_form' => FALSE,
    ),
    'required' => 0,
    'field_name' => 'field_ercore_ps_link',
    'entity_type' => 'node',
    'bundle' => 'ercore_presentation',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ps_date.
  'ps_field_ercore_ps_date' => array(
    'weight' => '-11',
    'label' => 'Date',
    'widget_type' => 'date_popup',
    'description' => '',
    'widget' => array(
      'type' => 'date_popup',
      'weight' => '1',
      'module' => 'date',
      'active' => '1',
      'settings' => array(
        'input_format' => 'm/d/Y',
        'input_format_custom' => '',
        'increment' => '1',
        'text_parts' => array(),
        'year_range' => '-3:+3',
        'label_position' => 'above',
        'repeat_collapsed' => '',
        'display_all_day' => 0,
      ),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'above',
        'type' => 'date_default',
        'weight' => '2',
        'settings' => array(
          'show_repeat_rule' => 'show',
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_to' => '',
          'fromto' => 'both',
          'format_type' => 'medium',
          'show_remaining_days' => FALSE,
        ),
        'module' => 'date',
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'date_default',
        'weight' => '0',
        'settings' => array(
          'show_repeat_rule' => 'show',
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_to' => '',
          'fromto' => 'both',
          'format_type' => 'medium',
          'show_remaining_days' => FALSE,
        ),
        'module' => 'date',
      ),
      'default' => array(
        'label' => 'hidden',
        'type' => 'date_default',
        'weight' => '0',
        'settings' => array(
          'format_type' => 'medium',
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
    'settings' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'required' => FALSE,
    'field_name' => 'field_ercore_ps_date',
    'entity_type' => 'node',
    'bundle' => 'ercore_presentation',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ps_upload.
  'ps_field_ercore_ps_upload' => array(
    'label' => 'Upload File',
    'widget' => array(
      'weight' => '10',
      'type' => 'file_generic',
      'module' => 'file',
      'active' => 1,
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
    ),
    'settings' => array(
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc docx',
      'max_filesize' => '',
      'description_field' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'file_default',
        'weight' => '10',
        'settings' => array(),
        'module' => 'file',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '7',
        'settings' => array(),
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'file_default',
        'weight' => '11',
        'settings' => array(),
        'module' => 'file',
      ),
    ),
    'required' => 0,
    'description' => '',
    'field_name' => 'field_ercore_ps_upload',
    'entity_type' => 'node',
    'bundle' => 'ercore_presentation',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ps_others.
  'ps_field_ercore_ps_others' => array(
    'label' => 'Non-EPSCoR Presenter(s)',
    'widget' => array(
      'weight' => '3',
      'type' => 'text_textfield',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'size' => '60',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '2',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '2',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_ps_others',
    'entity_type' => 'node',
    'bundle' => 'ercore_presentation',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ps_type.
  'ps_field_ercore_ps_type' => array(
    'label' => 'Type of Presentation',
    'widget' => array(
      'weight' => '5',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '3',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '4',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_ps_type',
    'entity_type' => 'node',
    'bundle' => 'ercore_presentation',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_goals.
  'ps_field_ercore_goals' => array(
    'label' => 'Goals and Objectives',
    'widget' => array(
      'weight' => '7',
      'type' => 'text_textfield',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'size' => '60',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'linkit' => array(
        'enable' => 0,
        'profile' => '',
        'button_text' => 'Search',
      ),
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '7',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '6',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_goals',
    'entity_type' => 'node',
    'bundle' => 'ercore_presentation',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ps_status.
  'ps_field_ercore_ps_status' => array(
    'label' => 'Status',
    'widget' => array(
      'weight' => '6',
      'type' => 'options_select',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '4',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '5',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_ps_status',
    'entity_type' => 'node',
    'bundle' => 'ercore_presentation',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_organizer.
  'ps_field_ercore_organizer' => array(
    'label' => 'EPSCoR Presenter(s)',
    'widget' => array(
      'weight' => '2',
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
          'view' => 0,
          'update' => 0,
          'delete' => 0,
          'deny_view' => 0,
          'deny_update' => 0,
          'deny_delete' => 0,
        ),
        'referenced_published' => '0',
        'create' => array(
          'article' => 0,
          'page' => 0,
          'ercore_admin' => 0,
          'ercore_event' => 0,
          'ercore_collaboration' => 0,
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
          'view' => 0,
          'update' => 0,
          'delete' => 0,
        ),
        'author_published' => '0',
        'all' => array(
          'view' => 0,
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
        'settings' => array(
          'link' => FALSE,
        ),
        'module' => 'entityreference',
        'weight' => 11,
      ),
      'full' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 1,
    'description' => '',
    'entityconnect_unload_add' => '1',
    'entityconnect_unload_edit' => '1',
    'entityconnect_show_add_icon' => '0',
    'entityconnect_show_edit_icon' => '0',
    'default_value' => NULL,
    'field_name' => 'field_ercore_organizer',
    'entity_type' => 'node',
    'bundle' => 'ercore_presentation',
    'deleted' => '0',
  ),
);
