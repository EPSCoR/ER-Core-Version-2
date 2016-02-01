<?php
/**
 * @file
 * Includes array of ERCore Collaboration field definitions.
 */

$ercore_collaboration_definitions = array(
// FIELD: field_ercore_cn_dates.
  'cn_field_ercore_cn_dates' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'granularity' => array(
        'month' => 'month',
        'year' => 'year',
        'day' => 0,
        'hour' => 0,
        'minute' => 0,
        'second' => 0,
      ),
      'tz_handling' => 'none',
      'timezone_db' => '',
      'cache_enabled' => 0,
      'cache_count' => '4',
      'repeat' => '0',
      'todate' => 'optional',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_cn_dates' => array(
              'value' => 'field_ercore_cn_dates_value',
              'value2' => 'field_ercore_cn_dates_value2',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_cn_dates' => array(
              'value' => 'field_ercore_cn_dates_value',
              'value2' => 'field_ercore_cn_dates_value2',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_ercore_cn_dates',
    'type' => 'date',
    'module' => 'date',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => 20,
        'not null' => FALSE,
        'sortable' => TRUE,
        'views' => TRUE,
      ),
      'value2' => array(
        'type' => 'varchar',
        'length' => 20,
        'not null' => FALSE,
        'sortable' => TRUE,
        'views' => FALSE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_collaboration',
      ),
    ),
  ),

// FIELD: field_ercore_cn_collaborator.
  'cn_field_ercore_cn_collaborator' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_cn_collaborator' => array(
              'value' => 'field_ercore_cn_collaborator_value',
              'revision_id' => 'field_ercore_cn_collaborator_revision_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_cn_collaborator' => array(
              'value' => 'field_ercore_cn_collaborator_value',
              'revision_id' => 'field_ercore_cn_collaborator_revision_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        'revision_id',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_ercore_cn_collaborator',
    'type' => 'field_collection',
    'module' => 'field_collection',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'int',
        'not null' => FALSE,
        'description' => 'The field collection item id.',
      ),
      'revision_id' => array(
        'type' => 'int',
        'not null' => FALSE,
        'description' => 'The field collection item revision id.',
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_collaboration',
      ),
    ),
  ),
);
