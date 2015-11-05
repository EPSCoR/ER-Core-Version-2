<?php
/**
 * @file
 * Includes array of ERCore User field instances.
 */

$ercore_user_instances = array(
// INSTANCE: field_ercore_us_160hours
  'field_ercore_us_160hours' => array(
    'label' =>
      'Do you participate in EPSCoR activities more than 160 hours per year?',
    'widget' => array(
      'weight' => '18',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'list_default',
        'weight' => '52',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'list_default',
        'weight' => '52',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 1,
    'description' =>
      '160 hours is equivalent to 4 weeks at 40 hours, 8 weeks at 20 hours, or
      one person-month.',
    'default_value_php' => '',
    'default_value_function' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_160hours',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_doctor_act
  'field_ercore_us_doctor_act' => array(
    'label' => 'Actual Doctoral Completion Date',
    'widget' => array(
      'weight' => '14',
      'type' => 'date_select',
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
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '14',
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
        'weight' => '14',
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
    'required' => 0,
    'description' => '',
    'field_name' => 'field_ercore_us_doctor_act',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_masters_act
  'field_ercore_us_masters_act' => array(
    'label' => 'Actual Masters Graduation Date',
    'widget' => array(
      'weight' => '12',
      'type' => 'date_select',
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
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '12',
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
        'weight' => '12',
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
    'required' => 0,
    'description' => '',
    'field_name' => 'field_ercore_us_masters_act',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_under_act
  'field_ercore_us_under_act' => array(
    'label' => 'Actual Undergraduate Graduation Date',
    'widget' => array(
      'weight' => '10',
      'type' => 'date_select',
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
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '10',
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
        'weight' => '10',
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
    'required' => 0,
    'description' => '',
    'field_name' => 'field_ercore_us_under_act',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_additional_doc
  'field_ercore_us_additional_doc' => array(
    'label' => 'Please upload your RCR certificate.',
    'widget' => array(
      'weight' => '14',
      'type' => 'file_generic',
      'module' => 'file',
      'active' => 1,
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
    ),
    'settings' => array(
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc',
      'max_filesize' => '',
      'description_field' => 0,
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'file_default',
        'weight' => '43',
        'settings' => array(),
        'module' => 'file',
      ),
      'full'  => array(
        'label' => 'hidden',
        'type' => 'file_default',
        'weight' => '43',
        'settings' => array(),
        'module' => 'file',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_additional_doc',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_address
  'field_ercore_us_address' => array(
    'label' => 'Work Address',
    'widget' => array(
      'weight' => '4',
      'type' => 'text_textarea',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => '5',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '10',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '10',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_address',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_advisor
  'field_ercore_us_advisor' => array(
    'label' => 'Advisor',
    'widget' => array(
      'weight' => '15',
      'type' => 'text_textfield',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'size' => '60',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '15',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '15',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_advisor',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_doctor_ant
  'field_ercore_us_doctor_ant' => array(
    'label' => 'Anticipated Doctorate Completion Date',
    'widget' => array(
      'weight' => '13',
      'type' => 'date_select',
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
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '13',
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
        'weight' => '13',
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
    'required' => 0,
    'description' => '',
    'field_name' => 'field_ercore_us_doctor_ant',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_masters_ant
  'field_ercore_us_masters_ant' => array(
    'label' => 'Anticipated Masters Graduation Date',
    'widget' => array(
      'weight' => '11',
      'type' => 'date_select',
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
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '11',
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
        'weight' => '11',
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
    'required' => 0,
    'description' => '',
    'field_name' => 'field_ercore_us_masters_ant',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_under_ant
  'field_ercore_us_under_ant' => array(
    'label' => 'Anticipated Undergraduate Graduation Date',
    'widget' => array(
      'weight' => '9',
      'type' => 'date_select',
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
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '9',
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
        'weight' => '9',
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
    'required' => 0,
    'description' => '',
    'field_name' => 'field_ercore_us_under_ant',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_collect_data
  'field_ercore_us_collect_data' => array(
    'label' => 'Collecting Data?',
    'widget' => array(
      'weight' => '1',
      'type' => 'options_onoff',
      'module' => 'options',
      'active' => 1,
      'settings' => array(
        'display_label' => 0,
      ),
    ),
    'settings' => array(
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '10',
        'settings' => array(),
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '10',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(
      array(
        'value' => 0,
      ),
    ),
    'field_name' => 'field_ercore_us_collect_data',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_committees
  'field_ercore_us_committees' => array(
    'label' => 'Boards & Committees',
    'widget' => array(
      'weight' => '12',
      'type' => 'select_or_other_buttons',
      'module' => 'select_or_other',
      'active' => 1,
      'settings' => array(
        'available_options' =>
          "External Advisory Board\nState EPSCoR\nCommittee\nRII4 Management
          Team\n",
        'available_options_php' => '',
        'other' => 'Other',
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'other_size' => '60',
        'sort_options' => 1,
        'markup_available_options_php' => '<none>',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '8',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '8',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' =>
      'Please select which boards or committees you are or will be a member
      of.',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_committees',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_data_frequency
  'field_ercore_us_data_frequency' => array(
    'label' => 'Data Frequency',
    'widget' => array(
      'weight' => '3',
      'type' => 'options_onoff',
      'module' => 'options',
      'active' => 1,
      'settings' => array(
        'display_label' => 0,
      ),
    ),
    'settings' => array(
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '15',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '15',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 0,
    'description' =>
      'Will you be collecting this data one time or will it be on going?',
    'default_value' => array(
      array(
        'value' => 0,
      ),
    ),
    'field_name' => 'field_ercore_us_data_frequency',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_data_submit_date
  'field_ercore_us_data_submit_date' => array(
    'label' => 'Data Repository Submission',
    'widget' => array(
      'weight' => '4',
      'type' => 'date_select',
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
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '18',
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
        'weight' => '18',
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
    'required' => 0,
    'description' =>
      'When do you anticipate the data be available to the data repository?',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_data_submit_date',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_data_url
  'field_ercore_us_data_url' => array(
    'label' => 'Data URL',
    'widget' => array(
      'weight' => '6',
      'type' => 'link_field',
      'module' => 'link',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'validate_url' => 1,
      'url' => 0,
      'title' => 'none',
      'title_value' => '',
      'title_maxlength' => '128',
      'display' => array(
        'url_cutoff' => '80',
      ),
      'attributes' => array(
        'target' => '_blank',
        'rel' => '',
        'class' => '',
        'configurable_title' => 0,
        'title' => '',
      ),
      'rel_remove' => 'default',
      'user_register_form' => 0,
      'enable_tokens' => 1,
      'title_label_use_field_label' => FALSE,
      'absolute_url' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'link_default',
        'weight' => '19',
        'settings' => array(),
        'module' => 'link',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'link_default',
        'weight' => '19',
        'settings' => array(),
        'module' => 'link',
      ),
    ),
    'required' => 0,
    'description' =>
      'Please enter the URL of the site where your metadata will be held.',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_data_url',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_department
  'field_ercore_us_department' => array(
    'label' => 'Department',
    'widget' => array(
      'weight' => '2',
      'type' => 'text_textfield',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'size' => '60',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '7',
        'settings' => array(),
        'module' => 'text',
      ),
      'full'  => array(
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
    'field_name' => 'field_ercore_us_department',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_description
  'field_ercore_us_description' => array(
    'label' => 'Description of Role and Contributions',
    'widget' => array(
      'weight' => '20',
      'type' => 'text_textarea',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => '5',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '40',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '40',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' =>
      'Please describe your role and contribution to the project. Include
      information about what you are doing, in which projects, who you are
      working with, location, dates and your contribution.',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_description',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_disabilities
  'field_ercore_us_disabilities' => array(
    'label' => 'Disabilities',
    'widget' => array(
      'weight' => '11',
      'type' => 'select_or_other_buttons',
      'module' => 'select_or_other',
      'active' => 1,
      'settings' => array(
        'available_options' =>
          "None\nHearing Impairment\nVisual Impairment\nMobility/Orthopedic\n
          Impairment",
        'available_options_php' => '',
        'other' => 'Other',
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'other_size' => '60',
        'sort_options' => 0,
        'markup_available_options_php' => '<none>',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '12',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '12',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(
      array(
        'value' => 'None',
      ),
    ),
    'field_name' => 'field_ercore_us_disabilities',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_ethnicity
  'field_ercore_us_ethnicity' => array(
    'label' => 'Ethnicity',
    'widget' => array(
      'weight' => '10',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '11',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '11',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value_php' => '',
    'default_value_function' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_ethnicity',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_fac_support
  'field_ercore_us_fac_support' => array(
    'label' =>
      'Do you or anyone in your research group receive salary support from
      EPSCoR?',
    'widget' => array(
      'weight' => '7',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'list_default',
        'weight' => '46',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'list_default',
        'weight' => '46',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_ercore_us_fac_support',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_gender
  'field_ercore_us_gender' => array(
    'label' => 'Gender',
    'widget' => array(
      'weight' => '9',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '10',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '10',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value_php' => '',
    'default_value_function' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_gender',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_has_this_user
  'field_ercore_us_has_this_user' => array(
    'label' => 'Have you been put in touch with the Data Manager?',
    'widget' => array(
      'weight' => '5',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '11',
        'settings' => array(),
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '11',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_ercore_us_has_this_user',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_hired_date
  'field_ercore_us_hired_date' => array(
    'label' => 'Hired Date',
    'widget' => array(
      'weight' => '14',
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
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '44',
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
        'weight' => '44',
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
    'required' => 0,
    'description' =>
      'Enter the date that you were first hired by EPSCoR (if applicable).
      This would be the date that you started getting paid.',
    'field_name' => 'field_ercore_us_hired_date',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_inst_ref
  'field_ercore_us_inst_ref' => array(
    'label' => 'Participating Institutions',
    'widget' => array(
      'weight' => '1',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'entityreference_label',
        'weight' => '6',
        'settings' => array(
          'link' => 0,
        ),
        'module' => 'entityreference',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'entityreference_label',
        'weight' => '6',
        'settings' => array(
          'link' => 0,
        ),
        'module' => 'entityreference',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'default_value_function' => '',
    'entityconnect_unload_add' => '1',
    'entityconnect_unload_edit' => '1',
    'entityconnect_show_add_icon' => '0',
    'entityconnect_show_edit_icon' => '0',
    'field_name' => 'field_ercore_us_inst_ref',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_leadership_team
  'field_ercore_us_leadership_team' => array(
    'label' => 'EPSCoR Management Team',
    'widget' => array(
      'weight' => '6',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'list_default',
        'weight' => '42',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'list_default',
        'weight' => '42',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'default_value_php' => '',
    'default_value_function' => '',
    'field_name' => 'field_ercore_us_leadership_team',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_funding_src
  'field_ercore_us_funding_src' => array(
    'label' => 'Funding Sources',
    'widget' => array(
      'weight' => '17',
      'type' => 'text_textarea',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => '5',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '51',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'above',
        'type' => 'text_default',
        'weight' => '51',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' =>
      'Provide a list of all funding sources that supported your participation
      in EPSCoR.',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_funding_src',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_mnt_up
  'field_ercore_us_mnt_up' => array(
    'label' => 'Please upload your mentoring plan',
    'widget' => array(
      'weight' => '16',
      'type' => 'file_generic',
      'module' => 'file',
      'active' => 1,
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
    ),
    'settings' => array(
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc',
      'max_filesize' => '',
      'description_field' => 0,
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'file_default',
        'weight' => '45',
        'settings' => array(),
        'module' => 'file',
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'file_default',
        'weight' => '45',
        'settings' => array(),
        'module' => 'file',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_mnt_up',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_ment_signoff
  'field_ercore_us_ment_signoff' => array(
    'label' => 'Mentoring Plan Sign Off Date',
    'widget' => array(
      'weight' => '15',
      'type' => 'date_select',
      'module' => 'date',
      'active' => 1,
      'settings' => array(
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'year_range' => '-3:+3',
        'increment' => 15,
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
      'user_register_form' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '44',
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
        'weight' => '44',
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
    'required' => 0,
    'description' =>
      'Please enter the date your adviser signed off on your mentoring plan.',
    'default_value' => array(),
    'field_name' => 'field_ercore_us_ment_signoff',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_months_of_effort
  'field_ercore_us_months_of_effort' => array(
    'label' => 'Months of Direct Funding',
    'widget' => array(
      'weight' => '16',
      'type' => 'options_select',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '49',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '49',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 0,
    'description' =>
      'How many months of direct funding do you receive? Round up or down to
      the nearest month of funding you are expected to receive.',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_months_of_effort',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_sen_role
  'field_ercore_us_sen_role' => array(
    'label' => 'Most Senior Project Role',
    'widget' => array(
      'weight' => '5',
      'type' => 'options_select',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '41',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '41',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_sen_role',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_paid
  'field_ercore_us_paid' => array(
    'label' => 'Are you paid by the EPSCoR grant?',
    'widget' => array(
      'weight' => '15',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'list_default',
        'weight' => '48',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'list_default',
        'weight' => '48',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value_php' => '',
    'default_value_function' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_paid',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_part_date
  'field_ercore_us_part_date' => array(
    'label' => 'Participating Date(s)',
    'widget' => array(
      'weight' => '13',
      'type' => 'date_select',
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
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '45',
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
        'weight' => '45',
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
    'required' => 0,
    'description' =>
      "Please enter the date when you (officially) began participating in
      EPSCoR. Click the \"show end date\" box to make the Participating End
      Date widget appear. If you are currently participating, do not enter an
      end date.",
    'field_name' => 'field_ercore_us_part_date',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_person_month
  'field_ercore_us_person_month' => array(
    'label' => 'Months of Effort This Year',
    'widget' => array(
      'weight' => '19',
      'type' => 'options_select',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '50',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '50',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 0,
    'description' =>
      'How many months of effort will you commit to EPSCoR this year? Round up
      or down to the nearest month of effort you are expected to participate in
      EPSCoR research.',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_person_month',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_phone_personal
  'field_ercore_us_phone_personal' => array(
    'label' => 'Phone (mobile)',
    'widget' => array(
      'weight' => '2',
      'type' => 'text_textfield',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'size' => '60',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '8',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '8',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_phone_personal',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_phone_work
  'field_ercore_us_phone_work' => array(
    'label' => 'Phone (work)',
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
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '9',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '9',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_phone_work',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_pro_link
  'field_ercore_us_pro_link' => array(
    'label' => 'Professional Link',
    'widget' => array(
      'weight' => '5',
      'type' => 'link_field',
      'module' => 'link',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'validate_url' => 0,
      'url' => 0,
      'title' => 'none',
      'title_value' => '',
      'title_maxlength' => '128',
      'display' => array(
        'url_cutoff' => '80',
      ),
      'attributes' => array(
        'target' => 'default',
        'rel' => '',
        'class' => '',
        'configurable_title' => 0,
        'title' => '',
      ),
      'user_register_form' => 0,
      'enable_tokens' => 1,
      'title_label_use_field_label' => FALSE,
      'absolute_url' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'link_default',
        'weight' => '11',
        'settings' => array(),
        'module' => 'link',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'link_default',
        'weight' => '11',
        'settings' => array(),
        'module' => 'link',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_pro_link',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_race
  'field_ercore_us_race' => array(
    'label' => 'Race',
    'widget' => array(
      'weight' => '12',
      'type' => 'select_or_other_buttons',
      'module' => 'select_or_other',
      'active' => 1,
      'settings' => array(
        'available_options' =>
          "Prefer not to respond|Prefer not to respond\nAmerican Indian or\n
          Alaskan Native|American Indian or Alaskan Native\nAsian|Asian\n
          Filipino|Filipino\nBlack or African American|Black or African
          American\nPacific Islander|Pacific Islander\nNative
          Hawaiian|Native Hawaiian\nWhite|White",
        'available_options_php' => '',
        'other' => 'Other',
        'other_title' => '',
        'other_unknown_defaults' => 'other',
        'other_size' => '60',
        'sort_options' => 0,
        'markup_available_options_php' => '<none>',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '13',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '13',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_race',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_rcr_bool
  'field_ercore_us_rcr_bool' => array(
    'label' => 'I have completed the RCR training',
    'widget' => array(
      'weight' => '11',
      'type' => 'options_onoff',
      'module' => 'options',
      'active' => 1,
      'settings' => array(
        'display_label' => 1,
      ),
    ),
    'settings' => array(
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '9',
        'settings' => array(),
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'hidden',
        'weight' => '9',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(
      array(
        'value' => 0,
      ),
    ),
    'field_name' => 'field_ercore_us_rcr_bool',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_rcr_in_person
  'field_ercore_us_rcr_in_person' => array(
    'label' => 'RCR In-person',
    'widget' => array(
      'weight' => '10',
      'type' => 'date_select',
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
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '39',
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
        'weight' => '39',
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
    'required' => 0,
    'description' => '',
    'field_name' => 'field_ercore_us_rcr_in_person',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_rcr_inperson_ul
  'field_ercore_us_rcr_inperson_ul' => array(
    'label' => 'RCR In-person Upload',
    'widget' => array(
      'weight' => '11',
      'type' => 'file_generic',
      'module' => 'file',
      'active' => 1,
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
    ),
    'settings' => array(
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc',
      'max_filesize' => '',
      'description_field' => 0,
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'file_default',
        'weight' => '40',
        'settings' => array(),
        'module' => 'file',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'file_default',
        'weight' => '40',
        'settings' => array(),
        'module' => 'file',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_rcr_inperson_ul',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_rcr_online
  'field_ercore_us_rcr_online' => array(
    'label' => 'RCR Online',
    'widget' => array(
      'weight' => '12',
      'type' => 'date_select',
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
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'date_default',
        'weight' => '41',
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
        'weight' => '41',
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
    'required' => 0,
    'description' => '',
    'field_name' => 'field_ercore_us_rcr_online',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_rcr_online_up
  'field_ercore_us_rcr_online_up' => array(
    'label' => 'RCR Online Upload',
    'widget' => array(
      'weight' => '13',
      'type' => 'file_generic',
      'module' => 'file',
      'active' => 1,
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
    ),
    'settings' => array(
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc',
      'max_filesize' => '',
      'description_field' => 0,
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'file_default',
        'weight' => '42',
        'settings' => array(),
        'module' => 'file',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'file_default',
        'weight' => '42',
        'settings' => array(),
        'module' => 'file',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_rcr_online_up',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_supervisor
  'field_ercore_us_supervisor' => array(
    'label' => 'Supervisor',
    'widget' => array(
      'weight' => '8',
      'type' => 'text_textfield',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'size' => '60',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '47',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '47',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_supervisor',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_data_type
  'field_ercore_us_data_type' => array(
    'label' => 'Description of Data',
    'widget' => array(
      'weight' => '2',
      'type' => 'text_textarea',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'rows' => '3',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '17',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '17',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => "Please provide a brief description of type and frequency of the data you\n    will be collecting.",
    'default_value' => NULL,
    'field_name' => 'field_ercore_us_data_type',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_us_veteran_status
  'field_ercore_us_veteran_status' => array(
    'label' => 'Veteran',
    'widget' => array(
      'weight' => '13',
      'type' => 'options_onoff',
      'module' => 'options',
      'active' => 1,
      'settings' => array(
        'display_label' => 1,
      ),
    ),
    'settings' => array(
      'user_register_form' => 0,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'list_default',
        'weight' => '14',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'list_default',
        'weight' => '14',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => array(
      array(
        'value' => 0,
      ),
    ),
    'field_name' => 'field_ercore_us_veteran_status',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_user_name
  'field_user_name' => array(
    'label' => 'User Name',
    'widget' => array(
      'weight' => '1',
      'type' => 'name_widget',
      'module' => 'name',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'size' => array(
        'title' => '6',
        'given' => '20',
        'middle' => '20',
        'family' => '20',
        'generational' => '5',
        'credentials' => '35',
      ),
      'title_display' => array(
        'title' => 'description',
        'given' => 'description',
        'middle' => 'description',
        'family' => 'description',
        'generational' => 'description',
        'credentials' => 'description',
      ),
      'field_type' => array(
        'title' => 'select',
        'given' => 'text',
        'middle' => 'text',
        'family' => 'text',
        'generational' => 'select',
        'credentials' => 'text',
      ),
      'inline_css' => array(
        'title' => '',
        'given' => '',
        'middle' => '',
        'family' => '',
        'generational' => '',
        'credentials' => '',
      ),
      'component_css' => '',
      'component_layout' => 'default',
      'show_component_required_marker' => 1,
      'credentials_inline' => 0,
      'name_user_preferred' => 0,
      'override_format' => 'default',
      'user_register_form' => 1,
      'title_field' => 'select',
      'generational_field' => 'select',
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'name_formatter',
        'weight' => '7',
        'settings' => array(
          'format' => 'full',
          'markup' => 0,
          'output' => 'default',
          'multiple' => 'default',
          'multiple_delimiter' => ', ',
          'multiple_and' => 'text',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_min' => '3',
          'multiple_el_al_first' => '1',
        ),
        'module' => 'name',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'name_formatter',
        'weight' => '7',
        'settings' => array(
          'format' => 'full',
          'markup' => 0,
          'output' => 'default',
          'multiple' => 'default',
          'multiple_delimiter' => ', ',
          'multiple_and' => 'text',
          'multiple_delimiter_precedes_last' => 'never',
          'multiple_el_al_min' => '3',
          'multiple_el_al_first' => '1',
        ),
        'module' => 'name',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_user_name',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_components
  'field_ercore_components' => array(
    'label' => 'Project Components',
    'widget' => array(
      'weight' => '11',
      'type' => 'options_select',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'entityreference_label',
        'weight' => '43',
        'settings' => array(
          'link' => FALSE,
        ),
        'module' => 'entityreference',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'entityreference_label',
        'weight' => '43',
        'settings' => array(
          'link' => FALSE,
        ),
        'module' => 'entityreference',
      ),
    ),
    'required' => 1,
    'description' => 'Please select which project component(s) you will participate in.',
    'entityconnect_unload_add' => '1',
    'entityconnect_unload_edit' => '1',
    'entityconnect_show_add_icon' => '0',
    'entityconnect_show_edit_icon' => '0',
    'default_value' => NULL,
    'field_name' => 'field_ercore_components',
    'entity_type' => 'user',
    'bundle' => 'user',
    'deleted' => '0',
  ),


);
