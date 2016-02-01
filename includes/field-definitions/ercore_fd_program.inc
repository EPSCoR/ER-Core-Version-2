<?php
/**
 * @file
 * Includes array of ERCore Program field definitions.
 */

$ercore_program_definitions = array(
// FIELD: field_ercore_prg_abbr.
  'pg_field_ercore_prg_abbr' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '15',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_prg_abbr' => array(
              'value' => 'field_ercore_prg_abbr_value',
              'format' => 'field_ercore_prg_abbr_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_prg_abbr' => array(
              'value' => 'field_ercore_prg_abbr_value',
              'format' => 'field_ercore_prg_abbr_format',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'format' => array(
        'table' => 'filter_format',
        'columns' => array(
          'format' => 'format',
        ),
      ),
    ),
    'indexes' => array(
      'format' => array(
        'format',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_ercore_prg_abbr',
    'type' => 'text',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '15',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'taxonomy_term' => array(
        'ercore_program_vocab',
      ),
    ),
  ),
);
