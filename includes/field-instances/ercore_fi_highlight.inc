<?php
/**
 * @file
 * Includes array of ERCore Highlight field instances.
 */

$ercore_highlight_instances = array(
// INSTANCE: field_ercore_hi_date.
  'field_ercore_hi_date' => array(
    'label' => 'Date completed',
    'widget' => array(
      'weight' => '2',
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
      'default_value2' => 'same',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '0',
        'settings' => array(
          'format_type' => 'long',
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_to' => '',
          'fromto' => 'both',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'module' => 'date',
      ),
      'teaser' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '0',
        'settings' => array(
          'format_type' => 'long',
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_to' => '',
          'fromto' => 'both',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'module' => 'date',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '0',
        'settings' => array(
          'format_type' => 'long',
          'multiple_number' => '',
          'multiple_from' => '',
          'multiple_to' => '',
          'fromto' => 'both',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'module' => 'date',
      ),
    ),
    'required' => 0,
    'description' => '',
    'field_name' => 'field_ercore_hi_date',
    'entity_type' => 'node',
    'bundle' => 'ercore_j_highlight',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_hi_image.
  'field_ercore_hi_image' => array(
    'label' => 'Image',
    'widget' => array(
      'weight' => '6',
      'type' => 'image_image',
      'module' => 'image',
      'active' => 1,
      'settings' => array(
        'progress_indicator' => 'throbber',
        'preview_image_style' => 'thumbnail',
      ),
    ),
    'settings' => array(
      'file_directory' => '',
      'file_extensions' => 'png jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'alt_field' => 1,
      'title_field' => 0,
      'default_image' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'image',
        'weight' => '2',
        'settings' => array(
          'image_style' => 'medium',
          'image_link' => '',
        ),
        'module' => 'image',
      ),
      'teaser' => array(
        'label' => 'hidden',
        'type' => 'image',
        'weight' => '1',
        'settings' => array(
          'image_style' => 'thumbnail',
          'image_link' => '',
        ),
        'module' => 'image',
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'image',
        'weight' => '2',
        'settings' => array(
          'image_style' => 'medium',
          'image_link' => '',
        ),
        'module' => 'image',
      ),
    ),
    'required' => 0,
    'description' => '',
    'field_name' => 'field_ercore_hi_image',
    'entity_type' => 'node',
    'bundle' => 'ercore_j_highlight',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_organizer.
  'field_ercore_hi_organizer' => array(
    'label' => 'EPSCoR Organizer(s)',
    'widget' => array(
      'weight' => '1',
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
        'weight' => '1',
        'settings' => array(
          'link' => 1,
        ),
        'module' => 'entityreference',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'entityreference_label',
        'weight' => '1',
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
    'bundle' => 'ercore_j_highlight',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_programs.
  'field_ercore_hi_programs' => array(
    'label' => 'Program',
    'widget' => array(
      'weight' => '4',
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
        'weight' => '5',
        'settings' => array(
          'link' => FALSE,
        ),
        'module' => 'entityreference',
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
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
    'bundle' => 'ercore_j_highlight',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_components.
  'field_ercore_hi_components' => array(
    'label' => 'Components',
    'widget' => array(
      'weight' => '3',
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
        'weight' => '5',
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
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
    ),
    'required' => 0,
    'description' => '',
    'entityconnect_unload_add' => '1',
    'entityconnect_unload_edit' => '1',
    'entityconnect_show_add_icon' => '0',
    'entityconnect_show_edit_icon' => '0',
    'default_value' => NULL,
    'field_name' => 'field_ercore_components',
    'entity_type' => 'node',
    'bundle' => 'ercore_j_highlight',
    'deleted' => '0',
  ),
);
