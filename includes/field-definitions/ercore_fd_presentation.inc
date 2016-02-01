<?php
/**
 * @file
 * Includes array of ERCore Presentation field definitions.
 */

$ercore_presentation_definitions = array(
// FIELD: field_ercore_ps_event.
  'ps_field_ercore_ps_event' => array(
    'type_name' => 'ercore_presentation',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '',
      'text_processing' => '0',
      'allowed_values' => '',
      'allowed_values_php' => '',
    ),
    'translatable' => '0',
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_ps_event' => array(
              'value' => 'field_ercore_ps_event_value',
              'format' => 'field_ercore_ps_event_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ps_event' => array(
              'value' => 'field_ercore_ps_event_value',
              'format' => 'field_ercore_ps_event_format',
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
    'field_name' => 'field_ercore_ps_event',
    'type' => 'text_long',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'text',
        'size' => 'big',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_presentation',
      ),
    ),
  ),

// FIELD: field_ercore_ps_link.
  'ps_field_ercore_ps_link' => array(
    'type_name' => 'ercore_presentation',
    'entity_types' => array(),
    'settings' => array(
      'attributes' => array(
        'target' => '_blank',
        'rel' => '',
        'class' => '',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => '80',
      ),
      'url' => 0,
      'title' => 'none',
      'title_value' => '',
      'enable_tokens' => 0,
      'validate_url' => 0,
      'title_maxlength' => 128,
    ),
    'translatable' => '0',
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_ps_link' => array(
              'url' => 'field_ercore_ps_link_url',
              'title' => 'field_ercore_ps_link_title',
              'attributes' => 'field_ercore_ps_link_attributes',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ps_link' => array(
              'url' => 'field_ercore_ps_link_url',
              'title' => 'field_ercore_ps_link_title',
              'attributes' => 'field_ercore_ps_link_attributes',
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
    'field_name' => 'field_ercore_ps_link',
    'type' => 'link_field',
    'module' => 'link',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'url' => array(
        'type' => 'varchar',
        'length' => 2048,
        'not null' => FALSE,
        'sortable' => TRUE,
      ),
      'title' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
        'sortable' => TRUE,
      ),
      'attributes' => array(
        'type' => 'text',
        'size' => 'medium',
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_presentation',
      ),
    ),
  ),

// FIELD: field_ercore_ps_date.
  'ps_field_ercore_ps_date' => array(
    'type_name' => 'ercore_presentation',
    'entity_types' => array(),
    'settings' => array(
      'todate' => '',
      'granularity' => array(
        'year' => 'year',
        'month' => 'month',
        'day' => 'day',
      ),
      'tz_handling' => 'none',
      'timezone_db' => '',
      'repeat' => 0,
    ),
    'translatable' => '0',
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_ps_date' => array(
              'value' => 'field_ercore_ps_date_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ps_date' => array(
              'value' => 'field_ercore_ps_date_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_ercore_ps_date',
    'type' => 'datetime',
    'module' => 'date',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'datetime',
        'mysql_type' => 'datetime',
        'pgsql_type' => 'timestamp without time zone',
        'sqlite_type' => 'varchar',
        'sqlsrv_type' => 'smalldatetime',
        'not null' => FALSE,
        'sortable' => TRUE,
        'views' => TRUE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_presentation',
      ),
    ),
  ),

// FIELD: field_ercore_ps_upload.
  'ps_field_ercore_ps_upload' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'display_field' => 0,
      'display_default' => 0,
      'uri_scheme' => 'public',
      'profile2_private' => 1,
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => 0,
        3 => 0,
        1 => 0,
        2 => 0,
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
            'field_data_field_ercore_ps_upload' => array(
              'fid' => 'field_ercore_ps_upload_fid',
              'display' => 'field_ercore_ps_upload_display',
              'description' => 'field_ercore_ps_upload_description',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ps_upload' => array(
              'fid' => 'field_ercore_ps_upload_fid',
              'display' => 'field_ercore_ps_upload_display',
              'description' => 'field_ercore_ps_upload_description',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(
      'fid' => array(
        'table' => 'file_managed',
        'columns' => array(
          'fid' => 'fid',
        ),
      ),
    ),
    'indexes' => array(
      'fid' => array(
        'fid',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_ercore_ps_upload',
    'type' => 'file',
    'module' => 'file',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'fid' => array(
        'description' => 'The {file_managed}.fid being referenced in this field.',
        'type' => 'int',
        'not null' => FALSE,
        'unsigned' => TRUE,
      ),
      'display' => array(
        'description' => 'Flag to control whether this file should be displayed when viewing content.',
        'type' => 'int',
        'size' => 'tiny',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 1,
      ),
      'description' => array(
        'description' => 'A description of the file.',
        'type' => 'text',
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_presentation',
      ),
    ),
  ),

// FIELD: field_ercore_ps_others.
  'ps_field_ercore_ps_others' => array(
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
            'field_data_field_ercore_ps_others' => array(
              'value' => 'field_ercore_ps_others_value',
              'format' => 'field_ercore_ps_others_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ps_others' => array(
              'value' => 'field_ercore_ps_others_value',
              'format' => 'field_ercore_ps_others_format',
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
    'field_name' => 'field_ercore_ps_others',
    'type' => 'text',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
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
      'node' => array(
        'ercore_presentation',
      ),
    ),
  ),

// FIELD: field_ercore_ps_type.
  'ps_field_ercore_ps_type' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Invited Speaker' => 'Invited Speaker',
        'Presentation' => 'Presentation',
        'Panel' => 'Panel',
        'Poster' => 'Poster',
        'Other' => 'Other',
      ),
      'allowed_values_function' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_ps_type' => array(
              'value' => 'field_ercore_ps_type_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ps_type' => array(
              'value' => 'field_ercore_ps_type_value',
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
    'field_name' => 'field_ercore_ps_type',
    'type' => 'list_text',
    'module' => 'list',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_presentation',
      ),
    ),
  ),

// FIELD: field_ercore_goals.
  'ps_field_ercore_goals' => array(
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
            'field_data_field_ercore_goals' => array(
              'value' => 'field_ercore_goals_value',
              'format' => 'field_ercore_goals_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_goals' => array(
              'value' => 'field_ercore_goals_value',
              'format' => 'field_ercore_goals_format',
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
    'field_name' => 'field_ercore_goals',
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
      'node' => array(
        'ercore_presentation',
      ),
    ),
  ),

// FIELD: field_ercore_ps_status.
  'ps_field_ercore_ps_status' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        2 => 'Submitted - Under Review',
        1 => 'Accepted - Awaiting Presentation',
        0 => 'Presented',
      ),
      'allowed_values_function' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_ps_status' => array(
              'value' => 'field_ercore_ps_status_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ps_status' => array(
              'value' => 'field_ercore_ps_status_value',
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
    'field_name' => 'field_ercore_ps_status',
    'type' => 'list_text',
    'module' => 'list',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_presentation',
      ),
    ),
  ),
);
