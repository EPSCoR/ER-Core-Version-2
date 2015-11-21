<?php
/**
 * @file
 * Includes array of ERCore Components field definitions.
 */

$ercore_component_definitions = array(
// FIELD: field_ercore_cmp_core.
  'field_ercore_cmp_core' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Non-Core Component',
        'Core Component',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_cmp_core' => array(
              'value' => 'field_ercore_cmp_core_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_cmp_core' => array(
              'value' => 'field_ercore_cmp_core_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        'value',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_ercore_cmp_core',
    'type' => 'list_boolean',
    'module' => 'list',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'taxonomy_term' => array(
        'ercore_component_vocab',
      ),
    ),
  ),
);
