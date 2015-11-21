<?php
/**
 * @file
 * Includes array of ERCore Engagement field instances.
 */

$ercore_engagement_instances = array(
  // INSTANCE: field_ercore_ee_ari_fac_f.
  'field_ercore_ee_ari_fac_f' => array(
    'weight' => '77',
    'label' => 'ARI: Faculty - Female',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '19',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '77',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '60',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '60',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_ari_fac_f',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_ari_fac_m.
  'field_ercore_ee_ari_fac_m' => array(
    'weight' => '79',
    'label' => 'ARI: Faculty - Male',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '20',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '79',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '61',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '61',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_ari_fac_m',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_ari_fac_u.
  'field_ercore_ee_ari_fac_u' => array(
    'weight' => '78',
    'label' => 'ARI: Faculty - Undeclared',
    'widget_type' => 'number',
    'description' => "Undeclared means that the person's gender is unknown.",
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '21',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '78',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '62',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '62',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_ari_fac_u',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_ari_stu_f.
  'field_ercore_ee_ari_stu_f' => array(
    'weight' => '72',
    'label' => 'ARI: Students - Female',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '14',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '72',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '55',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '55',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_ari_stu_f',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_ari_stu_m.
  'field_ercore_ee_ari_stu_m' => array(
    'weight' => '74',
    'label' => 'ARI: Students - Male',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '15',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '74',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '56',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '56',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_ari_stu_m',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_ari_stu_u.
  'field_ercore_ee_ari_stu_u' => array(
    'weight' => '73',
    'label' => 'ARI: Students - Undeclared',
    'widget_type' => 'number',
    'description' => "Undeclared means that the person's gender is unknown.",
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '16',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '73',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '57',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '57',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_ari_stu_u',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_ee_file.
  'field_ercore_ee_ee_file' => array(
    'label' => 'Upload the Excel Sheet',
    'widget' => array(
      'weight' => '8',
      'type' => 'file_generic',
      'module' => 'file',
      'active' => 1,
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
    ),
    'settings' => array(
      'file_directory' => '',
      'file_extensions' => 'xls',
      'max_filesize' => '',
      'description_field' => 0,
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'file_default',
        'weight' => '7',
        'settings' => array(),
        'module' => 'file',
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'inline',
        'settings' => array(),
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'hidden',
        'weight' => '8',
        'settings' => array(),
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_ee_ee_file',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_estimated.
  'field_ercore_ee_estimated' => array(
    'weight' => '51',
    'label' => 'Values are estimated',
    'widget_type' => 'optionwidgets_onoff',
    'description' => '',
    'default_value' => array(
      array(
        'value' => 0,
      ),
    ),
    'widget' => array(
      'weight' => '10',
      'type' => 'options_onoff',
      'module' => 'options',
      'active' => 1,
      'settings' => array(
        'display_label' => 0,
      ),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '51',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'list_default',
        'weight' => '0',
        'settings' => array(),
        'module' => 'list',
      ),
      'default' => array(
        'label' => 'hidden',
        'type' => 'list_default',
        'weight' => '0',
        'settings' => array(),
        'module' => 'list',
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
    'required' => 0,
    'field_name' => 'field_ercore_ee_estimated',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_stud_f.
  'field_ercore_ee_k12i_stud_f' => array(
    'weight' => '74',
    'label' => 'K-12: Students Reached Directly - Female',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '31',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '74',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '55',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '55',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_k12i_stud_f',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_stud_m.
  'field_ercore_ee_k12i_stud_m' => array(
    'weight' => '76',
    'label' => 'K-12: Students Reached Directly - Male',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '32',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '76',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '56',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '56',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_k12i_stud_m',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_stud_u.
  'field_ercore_ee_k12i_stud_u' => array(
    'weight' => '75',
    'label' => 'K-12: Students Reached Directly - Undeclared',
    'widget_type' => 'number',
    'description' => "Undeclared means that the person's gender is unknown.",
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '33',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '75',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '57',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '57',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_k12i_stud_u',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_stut_f.
  'field_ercore_ee_k12i_stut_f' => array(
    'weight' => '79',
    'label' => 'K-12: Students Reached via Teach. Training - Female',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '36',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '79',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '60',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '60',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_k12i_stut_f',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_stut_m.
  'field_ercore_ee_k12i_stut_m' => array(
    'weight' => '81',
    'label' => 'K-12: Students Reached via Teach. Training - Male',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '37',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '81',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '61',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '61',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_k12i_stut_m',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_stut_u.
  'field_ercore_ee_k12i_stut_u' => array(
    'weight' => '80',
    'label' => 'K-12: Students Reached via Teach. Training - Undeclared',
    'widget_type' => 'number',
    'description' => "Undeclared means that the person's gender is unknown.",
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '38',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '80',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '62',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '62',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_k12i_stut_u',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_tec_f.
  'field_ercore_ee_k12i_tec_f' => array(
    'weight' => '69',
    'label' => 'K-12: Teachers - Female',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '26',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '69',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '50',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '50',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_k12i_tec_f',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_tec_m.
  'field_ercore_ee_k12i_tec_m' => array(
    'weight' => '71',
    'label' => 'K-12: Teachers - Male',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '27',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '71',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '51',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '51',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_k12i_tec_m',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_tec_u.
  'field_ercore_ee_k12i_tec_u' => array(
    'weight' => '70',
    'label' => 'K-12: Teachers - Undeclared',
    'widget_type' => 'number',
    'description' => "Undeclared means that the person's gender is unknown.",
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '28',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '70',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '52',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '52',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_k12i_tec_u',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_msi_fac_f.
  'field_ercore_ee_msi_fac_f' => array(
    'weight' => '74',
    'label' => 'MSI: Faculty - Female',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '19',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '74',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '35',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '36',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_msi_fac_f',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_msi_fac_m.
  'field_ercore_ee_msi_fac_m' => array(
    'weight' => '76',
    'label' => 'MSI: Faculty - Male',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '20',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '76',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '36',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '37',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_msi_fac_m',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_msi_fac_u.
  'field_ercore_ee_msi_fac_u' => array(
    'weight' => '75',
    'label' => 'MSI: Faculty - Undeclared',
    'widget_type' => 'number',
    'description' => "Undeclared means that the person's gender is unknown.",
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '21',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '75',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '37',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '38',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_msi_fac_u',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_msi_stu_f.
  'field_ercore_ee_msi_stu_f' => array(
    'weight' => '69',
    'label' => 'MSI: Students - Female',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '14',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '69',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '30',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '31',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_msi_stu_f',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_msi_stu_m.
  'field_ercore_ee_msi_stu_m' => array(
    'weight' => '71',
    'label' => 'MSI: Students - Male',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '15',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '71',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '31',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '32',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_msi_stu_m',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_msi_stu_u.
  'field_ercore_ee_msi_stu_u' => array(
    'weight' => '70',
    'label' => 'MSI: Students - Undeclared',
    'widget_type' => 'number',
    'description' => "Undeclared means that the person's gender is unknown.",
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '16',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '70',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '32',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '33',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_msi_stu_u',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_oth_f.
  'field_ercore_ee_oth_f' => array(
    'weight' => '69',
    'label' => 'Other: Female',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '28',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '69',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '47',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '47',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_oth_f',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_oth_m.
  'field_ercore_ee_oth_m' => array(
    'weight' => '71',
    'label' => 'Other: Male',
    'widget_type' => 'number',
    'description' => "Underrepresented minorities include <strong>ONLY</strong> Alaska Natives, Native Americans, African Americans, Hispanics, Native Hawaiians and other Pacific Islanders, and Persons with Disabilities.\t\t\t\t\t\t\t\t\r\n",
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '29',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '71',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '48',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '48',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_oth_m',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_oth_u.
  'field_ercore_ee_oth_u' => array(
    'weight' => '70',
    'label' => 'Other: Undeclared',
    'widget_type' => 'number',
    'description' => "Undeclared means that the person's gender is unknown.",
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '30',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '70',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '49',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '49',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_oth_u',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_pui_fac_f.
  'field_ercore_ee_pui_fac_f' => array(
    'weight' => '77',
    'label' => 'UI: Faculty - Female',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '48',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '77',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '58',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '58',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_pui_fac_f',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_pui_fac_m.
  'field_ercore_ee_pui_fac_m' => array(
    'weight' => '79',
    'label' => 'UI: Faculty - Male',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '49',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '79',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '59',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '59',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_pui_fac_m',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_pui_fac_u.
  'field_ercore_ee_pui_fac_u' => array(
    'weight' => '78',
    'label' => 'UI: Faculty - Undeclared',
    'widget_type' => 'number',
    'description' => "Undeclared means that the person's gender is unknown.",
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '50',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '78',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '60',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '60',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_pui_fac_u',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_pui_stu_f.
  'field_ercore_ee_pui_stu_f' => array(
    'weight' => '72',
    'label' => 'UI: Students - Female',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '43',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '72',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '53',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '53',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_pui_stu_f',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_pui_stu_m.
  'field_ercore_ee_pui_stu_m' => array(
    'weight' => '74',
    'label' => 'UI: Students - Male',
    'widget_type' => 'number',
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '44',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '74',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '54',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '54',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_pui_stu_m',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_pui_stu_u.
  'field_ercore_ee_pui_stu_u' => array(
    'weight' => '73',
    'label' => 'UI: Students - Undeclared',
    'widget_type' => 'number',
    'description' => "Undeclared means that the person's gender is unknown.",
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'widget' => array(
      'weight' => '45',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '73',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '55',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '55',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'required' => 1,
    'field_name' => 'field_ercore_ee_pui_stu_u',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_ari_stu_mn.
  'field_ercore_ee_ari_stu_mn' => array(
    'label' => 'ARI: Student - Under-represented Minority',
    'widget' => array(
      'weight' => '17',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '58',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '58',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_ercore_ee_ari_stu_mn',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_tec_mn.
  'field_ercore_ee_k12i_tec_mn' => array(
    'label' => 'K-12: Teachers - Under-represented Minority',
    'widget' => array(
      'weight' => '29',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '53',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '53',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_ercore_ee_k12i_tec_mn',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_stud_mn.
  'field_ercore_ee_k12i_stud_mn' => array(
    'label' => 'K-12: Students Reached Directly - Under-represented Minority',
    'widget' => array(
      'weight' => '34',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '58',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '58',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_ercore_ee_k12i_stud_mn',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_stut_mn.
  'field_ercore_ee_k12i_stut_mn' => array(
    'label' => 'K-12: Students Reached via Teach. Training - Under-represented Minority',
    'widget' => array(
      'weight' => '39',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '63',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '63',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_ercore_ee_k12i_stut_mn',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_oth_mn.
  'field_ercore_ee_oth_mn' => array(
    'label' => 'Other: Under-represented Minority',
    'widget' => array(
      'weight' => '31',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '50',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '50',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_ercore_ee_oth_mn',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_pui_fac_mn.
  'field_ercore_ee_pui_fac_mn' => array(
    'label' => 'UI: Faculty - Under-represented Minority',
    'widget' => array(
      'weight' => '51',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '61',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '61',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_ercore_ee_pui_fac_mn',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_pui_stu_mn.
  'field_ercore_ee_pui_stu_mn' => array(
    'label' => 'UI: Student - Under-represented Minority',
    'widget' => array(
      'weight' => '46',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '56',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '56',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_ercore_ee_pui_stu_mn',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_ari_fac_mn.
  'field_ercore_ee_ari_fac_mn' => array(
    'label' => 'ARI: Faculty - Under-represented Minority',
    'widget' => array(
      'weight' => '22',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '63',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '63',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_ercore_ee_ari_fac_mn',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_msi_fac_mn.
  'field_ercore_ee_msi_fac_mn' => array(
    'label' => 'MSI: Faculty - Under-represented Minority',
    'widget' => array(
      'weight' => '22',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '39',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '38',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_ercore_ee_msi_fac_mn',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_msi_stu_mn.
  'field_ercore_ee_msi_stu_mn' => array(
    'label' => 'MSI: Student - Under-represented Minority',
    'widget' => array(
      'weight' => '17',
      'type' => 'number',
      'module' => 'number',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'min' => '0',
      'max' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '34',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'number_integer',
        'weight' => '33',
        'settings' => array(
          'thousand_separator' => '',
          'decimal_separator' => '.',
          'scale' => 0,
          'prefix_suffix' => TRUE,
        ),
        'module' => 'number',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => array(
      array(
        'value' => '0',
      ),
    ),
    'field_name' => 'field_ercore_ee_msi_stu_mn',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_oth_t.
  'field_ercore_ee_oth_t' => array(
    'label' => 'Other: Total',
    'widget' => array(
      'weight' => '27',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '46',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '46',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ee_oth_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_stut_t.
  'field_ercore_ee_k12i_stut_t' => array(
    'label' => 'K-12: Students Reached via Teach. Training - Total',
    'widget' => array(
      'weight' => '35',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '59',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '59',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ee_k12i_stut_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_stud_t.
  'field_ercore_ee_k12i_stud_t' => array(
    'label' => 'K-12: Students Reached Directly - Total',
    'widget' => array(
      'weight' => '30',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '54',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '54',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ee_k12i_stud_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_k12i_tec_t.
  'field_ercore_ee_k12i_tec_t' => array(
    'label' => 'K-12: Teachers - Total',
    'widget' => array(
      'weight' => '25',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '49',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '49',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ee_k12i_tec_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_msi_fac_t.
  'field_ercore_ee_msi_fac_t' => array(
    'label' => 'MSI: Faculty - Total',
    'widget' => array(
      'weight' => '18',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '35',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '34',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ee_msi_fac_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_msi_stu_t.
  'field_ercore_ee_msi_stu_t' => array(
    'label' => 'MSI: Students - Total',
    'widget' => array(
      'weight' => '13',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '30',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '29',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ee_msi_stu_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_pui_stu_t.
  'field_ercore_ee_pui_stu_t' => array(
    'label' => 'UI: Students - Total',
    'widget' => array(
      'weight' => '42',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '52',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '52',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ee_pui_stu_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_pui_fac_t.
  'field_ercore_ee_pui_fac_t' => array(
    'label' => 'UI: Faculty - Total',
    'widget' => array(
      'weight' => '47',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '57',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '57',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ee_pui_fac_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_ari_stu_t.
  'field_ercore_ee_ari_stu_t' => array(
    'label' => 'ARI: Students - Total',
    'widget' => array(
      'weight' => '13',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '54',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '54',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ee_ari_stu_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ari_fac_t.
  'field_ercore_ari_fac_t' => array(
    'label' => 'ARI: Faculty - Total',
    'widget' => array(
      'weight' => '18',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '59',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '59',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ari_fac_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_t_t.
  'field_ercore_ee_t_t' => array(
    'label' => 'Total',
    'widget' => array(
      'weight' => '46',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '56',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '56',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ee_t_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_f_t.
  'field_ercore_ee_f_t' => array(
    'label' => 'Total - Female',
    'widget' => array(
      'weight' => '52',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '57',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '57',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ee_f_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_m_t.
  'field_ercore_ee_m_t' => array(
    'label' => 'Total - Male',
    'widget' => array(
      'weight' => '53',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '58',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '58',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ee_m_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_u_t.
  'field_ercore_ee_u_t' => array(
    'label' => 'Total - Undeclared',
    'widget' => array(
      'weight' => '54',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '59',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '59',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ee_u_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_ee_um_t.
  'field_ercore_ee_um_t' => array(
    'label' => 'Total - Under-represented Minority',
    'widget' => array(
      'weight' => '55',
      'type' => 'computed',
      'module' => 'computed_field',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '60',
        'settings' => array(),
        'module' => 'computed_field',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'computed_field_plain',
        'weight' => '60',
        'settings' => array(),
        'module' => 'computed_field',
      ),
    ),
    'required' => 1,
    'description' => '',
    'field_name' => 'field_ercore_ee_um_t',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_ev_engagement',
    'deleted' => '0',
  ),

);
