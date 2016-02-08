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

// FIELD: field_ercore_organizer.
  'cn_field_ercore_organizer' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'target_type' => 'user',
      'handler' => 'base',
      'handler_settings' => array(
        'target_bundles' => array(),
        'sort' => array(
          'type' => 'none',
        ),
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
      ),
      'handler_submit' => 'Change handler',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_organizer' => array(
              'target_id' => 'field_ercore_organizer_target_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_organizer' => array(
              'target_id' => 'field_ercore_organizer_target_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'users' => array(
        'table' => 'users',
        'columns' => array(
          'target_id' => 'uid',
        ),
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        'target_id',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_ercore_organizer',
    'type' => 'entityreference',
    'module' => 'entityreference',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'target_id' => array(
        'description' => 'The id of the target entity.',
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_collaboration',
        'ercore_event',
        'ercore_j_highlight',
        'ercore_j_honor',
        'ercore_other_product',
        'ercore_patent',
        'ercore_proposal',
        'ercore_publication',
        'ercore_presentation',
      ),
    ),
  ),

// FIELD: field_ercore_components.
  'cn_field_ercore_components' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'target_type' => 'taxonomy_term',
      'handler' => 'views',
      'handler_settings' => array(
        'view' => array(
          'view_name' => 'ercore_component_reference',
          'display_name' => 'entityreference_1',
          'args' => array(),
        ),
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 1,
          ),
        ),
      ),
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_components' => array(
              'target_id' => 'field_ercore_components_target_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_components' => array(
              'target_id' => 'field_ercore_components_target_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'taxonomy_term_data' => array(
        'table' => 'taxonomy_term_data',
        'columns' => array(
          'target_id' => 'tid',
        ),
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        'target_id',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_ercore_components',
    'type' => 'entityreference',
    'module' => 'entityreference',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'target_id' => array(
        'description' => 'The id of the target entity.',
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_collaboration',
        'ercore_j_highlight',
      ),
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_programs.
  'cn_field_ercore_programs' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'target_type' => 'taxonomy_term',
      'handler' => 'views',
      'handler_settings' => array(
        'view' => array(
          'view_name' => 'ercore_program_reference',
          'display_name' => 'entityreference_1',
          'args' => array(),
        ),
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 1,
          ),
        ),
      ),
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_programs' => array(
              'target_id' => 'field_ercore_programs_target_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_programs' => array(
              'target_id' => 'field_ercore_programs_target_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'taxonomy_term_data' => array(
        'table' => 'taxonomy_term_data',
        'columns' => array(
          'target_id' => 'tid',
        ),
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        'target_id',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_ercore_programs',
    'type' => 'entityreference',
    'module' => 'entityreference',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
    'deleted' => '0',
    'columns' => array(
      'target_id' => array(
        'description' => 'The id of the target entity.',
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_collaboration',
        'ercore_event',
        'ercore_j_highlight',
        'ercore_j_honor',
        'ercore_patent',
        'ercore_proposal',
      ),
      'user' => array(
        'user',
      ),
    ),
  ),
);
