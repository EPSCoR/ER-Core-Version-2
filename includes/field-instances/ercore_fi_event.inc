<?php
/**
 * @file
 * Includes array of ERCore Event field instances.
 */

$ercore_event_instances = array(
// INSTANCE: field_ercore_ev_date
  'field_ercore_ev_date' => array(
    'label' => 'Date',
    'widget' => array(
      'weight' => '-3',
      'type' => 'date_popup',
      'module' => 'date',
      'active' => 1,
      'settings' => array(
        'input_format' => 'm/d/Y - g:i:sa',
        'input_format_custom' => '',
        'year_range' => '-3:+3',
        'increment' => '15',
        'label_position' => 'above',
        'text_parts' => array(),
        'repeat_collapsed' => 1,
        'no_fieldset' => 0,
      ),
    ),
    'settings' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'strtotime',
      'default_value_code2' => 'now +1 hour',
      'user_register_form' => FALSE,
    ),
    'display' => array(
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
      'teaser' => array(
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
      'full' => array(
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
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ev_date',
    'entity_type' => 'node',
    'bundle' => 'ercore_event',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ev_organizer
  'field_ercore_ev_organizer' => array(
    'label' => 'EPSCoR Organizer(s)',
    'widget' => array(
      'weight' => '-2',
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
          'ercore_event' => 'ercore_event',
          'article' => 0,
          'page' => 0,
          'ercore_admin' => 0,
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
        'weight' => '4',
        'settings' => array(
          'link' => 1,
        ),
        'module' => 'entityreference',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'entityreference_label',
        'weight' => '4',
        'settings' => array(
          'link' => 1,
        ),
        'module' => 'entityreference',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'entityreference_label',
        'weight' => '1',
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
    'bundle' => 'ercore_event',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ev_url
  'field_ercore_ev_url' => array(
    'label' => 'Event Link',
    'widget' => array(
      'weight' => '2',
      'type' => 'link_field',
      'module' => 'link',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'absolute_url' => 1,
      'validate_url' => 1,
      'url' => 0,
      'title' => 'optional',
      'title_value' => '',
      'title_label_use_field_label' => 0,
      'title_maxlength' => '128',
      'enable_tokens' => 0,
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
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'link_default',
        'weight' => '2',
        'settings' => array(),
        'module' => 'link',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'hidden',
        'settings' => array(),
        'module' => 'link',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'link_default',
        'weight' => '2',
        'settings' => array(),
        'module' => 'link',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_ev_url',
    'entity_type' => 'node',
    'bundle' => 'ercore_event',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ev_type
  'field_ercore_ev_type' => array(
    'label' => 'Event Type',
    'widget' => array(
      'weight' => '-1',
      'type' => 'select_or_other',
      'module' => 'select_or_other',
      'active' => 1,
      'settings' => array(
        'available_options' =>
          "0|Brown Bag\r\n1|Meeting\r\n2|Workshop\r\n3|Conference\r\n4|Seminar\r\n5|Retreat",
        'available_options_php' => '',
        'other' => 'Other',
        'other_title' =>
          'You selected "Other", please give more information on your event.',
        'other_unknown_defaults' => 'other',
        'other_size' => '60',
        'sort_options' => 0,
        'markup_available_options_php' => '<none>',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'select_or_other_formatter',
        'weight' => '1',
        'settings' => array(),
        'module' => 'select_or_other',
      ),
      'teaser' => array(
        'label' => 'inline',
        'type' => 'select_or_other_formatter',
        'weight' => '1',
        'settings' => array(),
        'module' => 'select_or_other',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'select_or_other_formatter',
        'weight' => '3',
        'settings' => array(),
        'module' => 'select_or_other',
      ),
    ),
    'required' => 1,
    'description' => 'Please specify what type of calendar event this is.',
    'default_value' => NULL,
    'field_name' => 'field_ercore_ev_type',
    'entity_type' => 'node',
    'bundle' => 'ercore_event',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ev_reminders
  'field_ercore_ev_reminders' => array(
    'weight' => '4',
    'label' => 'Will this event be attended by non-EPSCoR participants',
    'widget_type' => 'optionwidgets_onoff',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '6',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'hidden',
        'weight' => '9',
        'settings' => array(),
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'hidden',
        'weight' => '9',
        'settings' => array(),
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'hidden',
        'weight' => '9',
        'settings' => array(),
      ),
    ),
    'settings' => array(
      'min' => '',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
      'required_by_role' => array(),
    ),
    'required' => 1,
    'default_value_php' => '',
    'default_value_function' => '',
    'field_name' => 'field_ercore_ev_reminders',
    'entity_type' => 'node',
    'bundle' => 'ercore_event',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ev_document
  'field_ercore_ev_document' => array(
    'label' => 'Attach Document(s)',
    'widget' => array(
      'weight' => '5',
      'type' => 'file_generic',
      'module' => 'file',
      'active' => 1,
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
    ),
    'settings' => array(
      'file_directory' => '',
      'file_extensions' => 'txt pdf xls jpg png gif ppt pptx',
      'max_filesize' => '',
      'description_field' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'file_default',
        'weight' => '5',
        'settings' => array(),
        'module' => 'file',
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'file_default',
        'weight' => '5',
        'settings' => array(),
        'module' => 'file',
      ),
    ),
    'required' => 0,
    'description' => 'Attach a pdf of your event flier, minutes, etc...',
    'field_name' => 'field_ercore_ev_document',
    'entity_type' => 'node',
    'bundle' => 'ercore_event',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ev_location
  'field_ercore_ev_location' => array(
    'label' => 'Location/Address',
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
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '6',
        'settings' => array(),
        'module' => 'text',
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '6',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_ev_location',
    'entity_type' => 'node',
    'bundle' => 'ercore_event',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ev_room
  'field_ercore_ev_room' => array(
    'label' => 'Building (Room Number)',
    'widget' => array(
      'weight' => '9',
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
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '7',
        'settings' => array(),
        'module' => 'text',
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '7',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_ev_room',
    'entity_type' => 'node',
    'bundle' => 'ercore_event',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ev_engagement
  'field_ercore_ev_engagement' => array(
    'label' => 'External Engagement',
    'widget' => array(
      'weight' => '11',
      'type' => 'field_collection_hidden',
      'module' => 'field_collection',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'module' => 'field_collection',
      ),
      'default' => array(
        'label' => 'hidden',
        'type' => 'field_collection_view',
        'weight' => '8',
        'settings' => array(
          'edit' => 'Edit External Engagement',
          'delete' => 'Delete External Engagement',
          'add' => 'Add External Engagement',
          'description' => 1,
          'view_mode' => 'full',
        ),
        'module' => 'field_collection',
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'field_collection_view',
        'weight' => '8',
        'settings' => array(
          'edit' => 'Edit External Engagement',
          'delete' => 'Delete External Engagement',
          'add' => 'Add External Engagement',
          'description' => 1,
          'view_mode' => 'full',
        ),
        'module' => 'field_collection',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_ev_engagement',
    'entity_type' => 'node',
    'bundle' => 'ercore_event',
    'deleted' => '0',
  ),
);
