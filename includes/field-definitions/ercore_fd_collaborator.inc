<?php
/**
 * @file
 * Includes array of ERCore Collaborator field definitions.
 */

$ercore_collaborator_definitions = array(
  // FIELD: field_ercore_cr_inst_ref.
  'field_ercore_cr_inst_ref' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'target_type' => 'node',
      'handler' => 'views',
      'handler_settings' => array(
        'view' => array(
          'view_name' => 'ercore_institution_reference',
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
            'field_data_field_ercore_cr_inst_ref' => array(
              'target_id' => 'field_ercore_cr_inst_ref_target_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_cr_inst_ref' => array(
              'target_id' => 'field_ercore_cr_inst_ref_target_id',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'node' => array(
        'table' => 'node',
        'columns' => array(
          'target_id' => 'nid',
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
    'field_name' => 'field_ercore_cr_inst_ref',
    'type' => 'entityreference',
    'module' => 'entityreference',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
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
      'field_collection_item' => array(
        'field_ercore_cn_collaborator',
      ),
    ),
  ),

// FIELD: field_ercore_cr_name.
  'field_ercore_cr_name' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_cr_name' => array(
              'value' => 'field_ercore_cr_name_value',
              'format' => 'field_ercore_cr_name_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_cr_name' => array(
              'value' => 'field_ercore_cr_name_value',
              'format' => 'field_ercore_cr_name_format',
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
    'field_name' => 'field_ercore_cr_name',
    'type' => 'text',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '255',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'field_collection_item' => array(
        'field_ercore_cn_collaborator',
      ),
    ),
  ),

// FIELD: field_ercore_cr_dpt.
  'field_ercore_cr_dpt' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_cr_dpt' => array(
              'value' => 'field_ercore_cr_dpt_value',
              'format' => 'field_ercore_cr_dpt_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_cr_dpt' => array(
              'value' => 'field_ercore_cr_dpt_value',
              'format' => 'field_ercore_cr_dpt_format',
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
    'field_name' => 'field_ercore_cr_dpt',
    'type' => 'text',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '255',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'field_collection_item' => array(
        'field_ercore_cn_collaborator',
      ),
    ),
  ),
);
