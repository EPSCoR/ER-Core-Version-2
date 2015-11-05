<?php
/**
 * @file
 * Includes array of ERCore Components field instances.
 */

$ercore_components_instances = array(
// INSTANCE: field_ercore_cmp_core
  'field_ercore_cmp_core' => array(
    'label' => 'Core Component',
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
      'required_by_role' => array(
        5 => 0,
        4 => 0,
        6 => 0,
        1 => 0,
        3 => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '0',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '0',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 0,
    'description' =>
      "Core components should show up on every selection list. Most components
      will be core components. Non-core components are those that will only
      show up in special circumstances. For example, \"Administration\" and
      \"Guest\" may be considered non-core components, since we do not want to
      tag something like a collaboration with \"Guest\", but we may like to tag
      a user as a Guest.",
    'default_value' => array(
      array(
        'value' => 1,
      ),
    ),
    'field_name' => 'field_ercore_cmp_core',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'ercore_component_vocab',
    'deleted' => '0',
  ),

);
