<?php
/**
 * @file
 * Includes array of ERCore Collaborator field instances.
 */

$ercore_collaborator_instances = array(
// INSTANCE: field_ercore_cr_inst_ref
  'field_ercore_cr_inst_ref' => array(
    'label' => 'Institution/Organization',
    'widget' => array(
      'weight' => '7',
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
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'entityreference_label',
        'weight' => '2',
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
      'full' => array(
        'label' => 'hidden',
        'type' => 'entityreference_label',
        'weight' => '2',
        'settings' => array(
          'link' => FALSE,
        ),
        'module' => 'entityreference',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'default_value_function' => '',
    'entityconnect_unload_add' => '0',
    'entityconnect_unload_edit' => '0',
    'entityconnect_show_add_icon' => '1',
    'entityconnect_show_edit_icon' => '1',
    'field_name' => 'field_ercore_cr_inst_ref',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_cn_collaborator',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_cr_name
  'field_ercore_cr_name' => array(
    'label' => 'Name of Collaborating Individual',
    'widget' => array(
      'weight' => '5',
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
        'label' => 'hidden',
        'type' => 'text_default',
        'weight' => '0',
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
        'label' => 'hidden',
        'type' => 'text_default',
        'weight' => '0',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 1,
    'description' => 'Please provide the full name of the person.',
    'default_value' => NULL,
    'field_name' => 'field_ercore_cr_name',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_cn_collaborator',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_cr_dpt
  'field_ercore_cr_dpt' => array(
    'label' => 'Department',
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
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'text_default',
        'weight' => '1',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'text_default',
        'weight' => '1',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_cr_dpt',
    'entity_type' => 'field_collection_item',
    'bundle' => 'field_ercore_cn_collaborator',
    'deleted' => '0',
  ),
);
