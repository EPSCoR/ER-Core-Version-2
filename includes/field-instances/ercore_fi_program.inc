<?php
/**
 * @file
 * Includes array of ERCore Program field instances.
 */

$ercore_program_instances = array(
// INSTANCE: field_ercore_prg_abbr.
  'field_ercore_prg_abbr' => array(
    'label' => 'Program Abbreviation',
    'widget' => array(
      'weight' => '1',
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
        'weight' => '0',
        'settings' => array(),
        'module' => 'text',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '0',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 1,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_prg_abbr',
    'entity_type' => 'taxonomy_term',
    'bundle' => 'ercore_program_vocab',
    'deleted' => '0',
  ),
);
