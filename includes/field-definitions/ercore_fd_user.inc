<?php
/**
 * @file
 * Includes array of ERCore User field definitions.
 */

$ercore_user_definitions = array(
// FIELD: field_ercore_us_160hours.
  'field_ercore_us_160hours' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'I participate in EPSCoR activities less than 160 hours per year.',
        'I participate in EPSCoR activities more than 160 hours per year.',
      ),
      'allowed_values_function' => '',
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => 0,
        3 => 0,
        1 => 0,
        2 => 0,
      ),
      'allowed_values_php' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_160hours' => array(
              'value' => 'field_ercore_us_160hours_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_160hours' => array(
              'value' => 'field_ercore_us_160hours_value',
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
    'field_name' => 'field_ercore_us_160hours',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_doctor_act.
  'field_ercore_us_doctor_act' => array(
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
      'todate' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_doctor_act' => array(
              'value' => 'field_ercore_us_doctor_act_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_doctor_act' => array(
              'value' => 'field_ercore_us_doctor_act_value',
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
    'field_name' => 'field_ercore_us_doctor_act',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_masters_act.
  'field_ercore_us_masters_act' => array(
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
      'todate' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_masters_act' => array(
              'value' => 'field_ercore_us_masters_act_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_masters_act' => array(
              'value' => 'field_ercore_us_masters_act_value',
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
    'field_name' => 'field_ercore_us_masters_act',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_under_act.
  'field_ercore_us_under_act' => array(
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
      'todate' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_under_act' => array(
              'value' => 'field_ercore_us_under_act_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_under_act' => array(
              'value' => 'field_ercore_us_under_act_value',
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
    'field_name' => 'field_ercore_us_under_act',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_additional_doc.
  'field_ercore_us_additional_doc' => array(
    'type_name' => 'er_user_profile',
    'entity_types' => array(),
    'settings' => array(
      'display_field' => 0,
      'display_default' => 1,
      'uri_scheme' => 'public',
      'profile2_private' => FALSE,
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => 0,
        3 => 0,
        1 => 0,
        2 => 0,
      ),
      'description_field' => '0',
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
            'field_data_field_ercore_us_additional_doc' => array(
              'fid' => 'field_ercore_us_additional_doc_fid',
              'display' => 'field_ercore_us_additional_doc_display',
              'description' => 'field_ercore_us_additional_doc_description',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_additional_doc' => array(
              'fid' => 'field_ercore_us_additional_doc_fid',
              'display' => 'field_ercore_us_additional_doc_display',
              'description' => 'field_ercore_us_additional_doc_description',
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
    'field_name' => 'field_ercore_us_additional_doc',
    'type' => 'file',
    'module' => 'file',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_address.
  'field_ercore_us_address' => array(
    'type_name' => 'er_user_profile',
    'entity_types' => array(),
    'settings' => array(
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => '6',
        3 => 0,
        1 => 0,
        2 => 0,
      ),
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
            'field_data_field_ercore_us_address' => array(
              'value' => 'field_ercore_us_address_value',
              'format' => 'field_ercore_us_address_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_address' => array(
              'value' => 'field_ercore_us_address_value',
              'format' => 'field_ercore_us_address_format',
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
    'field_name' => 'field_ercore_us_address',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_advisor.
  'field_ercore_us_advisor' => array(
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
            'field_data_field_ercore_us_advisor' => array(
              'value' => 'field_ercore_us_advisor_value',
              'format' => 'field_ercore_us_advisor_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_advisor' => array(
              'value' => 'field_ercore_us_advisor_value',
              'format' => 'field_ercore_us_advisor_format',
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
    'field_name' => 'field_ercore_us_advisor',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_doctor_ant.
  'field_ercore_us_doctor_ant' => array(
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
      'todate' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_doctor_ant' => array(
              'value' => 'field_ercore_us_doctor_ant_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_doctor_ant' => array(
              'value' => 'field_ercore_us_doctor_ant_value',
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
    'field_name' => 'field_ercore_us_doctor_ant',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_masters_ant.
  'field_ercore_us_masters_ant' => array(
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
      'todate' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_masters_ant' => array(
              'value' => 'field_ercore_us_masters_ant_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_masters_ant' => array(
              'value' => 'field_ercore_us_masters_ant_value',
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
    'field_name' => 'field_ercore_us_masters_ant',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_under_ant.
  'field_ercore_us_under_ant' => array(
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
      'todate' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_under_ant' => array(
              'value' => 'field_ercore_us_under_ant_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_under_ant' => array(
              'value' => 'field_ercore_us_under_ant_value',
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
    'field_name' => 'field_ercore_us_under_ant',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_collect_data.
  'field_ercore_us_collect_data' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'I do not plan to be collecting data through my research.',
        'I do plan to be collecting data through my research.',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
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
            'field_data_field_ercore_us_collect_data' => array(
              'value' => 'field_ercore_us_collect_data_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_collect_data' => array(
              'value' => 'field_ercore_us_collect_data_value',
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
    'field_name' => 'field_ercore_us_collect_data',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_committees.
  'field_ercore_us_committees' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
      'profile2_private' => FALSE,
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
            'field_data_field_ercore_us_committees' => array(
              'value' => 'field_ercore_us_committees_value',
              'format' => 'field_ercore_us_committees_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_committees' => array(
              'value' => 'field_ercore_us_committees_value',
              'format' => 'field_ercore_us_committees_format',
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
      'type' => '2',
    ),
    'field_name' => 'field_ercore_us_committees',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_data_frequency.
  'field_ercore_us_data_frequency' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'One time',
        'Ongoing',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
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
            'field_data_field_ercore_us_data_frequency' => array(
              'value' => 'field_ercore_us_data_frequency_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_data_frequency' => array(
              'value' => 'field_ercore_us_data_frequency_value',
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
    'field_name' => 'field_ercore_us_data_frequency',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_data_submit_date.
  'field_ercore_us_data_submit_date' => array(
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
      'todate' => '',
      'profile2_private' => FALSE,
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
            'field_data_field_ercore_us_data_submit_date' => array(
              'value' => 'field_ercore_us_data_submit_date_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_data_submit_date' => array(
              'value' => 'field_ercore_us_data_submit_date_value',
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
    'field_name' => 'field_ercore_us_data_submit_date',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_data_url.
  'field_ercore_us_data_url' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'attributes' => array(
        'target' => 'default',
        'class' => '',
        'rel' => '',
      ),
      'url' => 0,
      'title' => 'optional',
      'title_value' => '',
      'title_maxlength' => 128,
      'enable_tokens' => 1,
      'display' => array(
        'url_cutoff' => 80,
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
            'field_data_field_ercore_us_data_url' => array(
              'url' => 'field_ercore_us_data_url_url',
              'title' => 'field_ercore_us_data_url_title',
              'attributes' => 'field_ercore_us_data_url_attributes',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_data_url' => array(
              'url' => 'field_ercore_us_data_url_url',
              'title' => 'field_ercore_us_data_url_title',
              'attributes' => 'field_ercore_us_data_url_attributes',
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
    'field_name' => 'field_ercore_us_data_url',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_department.
  'field_ercore_us_department' => array(
    'type_name' => 'er_user_profile',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => 0,
        3 => 0,
        1 => 0,
        2 => 0,
      ),
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
            'field_data_field_ercore_us_department' => array(
              'value' => 'field_ercore_us_department_value',
              'format' => 'field_ercore_us_department_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_department' => array(
              'value' => 'field_ercore_us_department_value',
              'format' => 'field_ercore_us_department_format',
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
    'field_name' => 'field_ercore_us_department',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_description.
  'field_ercore_us_description' => array(
    'type_name' => 'er_user_profile',
    'entity_types' => array(),
    'settings' => array(
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => 0,
        3 => 0,
        1 => 0,
        2 => 0,
      ),
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
            'field_data_field_ercore_us_description' => array(
              'value' => 'field_ercore_us_description_value',
              'format' => 'field_ercore_us_description_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_description' => array(
              'value' => 'field_ercore_us_description_value',
              'format' => 'field_ercore_us_description_format',
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
    'field_name' => 'field_ercore_us_description',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_disabilities.
  'field_ercore_us_disabilities' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
      'user_role_field' => array(
        66784200 => 0,
        137756511 => 0,
        166149871 => 0,
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
            'field_data_field_ercore_us_disabilities' => array(
              'value' => 'field_ercore_us_disabilities_value',
              'format' => 'field_ercore_us_disabilities_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_disabilities' => array(
              'value' => 'field_ercore_us_disabilities_value',
              'format' => 'field_ercore_us_disabilities_format',
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
      'type' => '2',
    ),
    'field_name' => 'field_ercore_us_disabilities',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_ethnicity.
  'field_ercore_us_ethnicity' => array(
    'type_name' => 'er_user_profile',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Hispanic or Latino',
        'Not Hispanic or Latino',
        'Unknown',
      ),
      'allowed_values_function' => '',
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => 0,
        3 => 0,
        1 => 0,
        2 => 0,
      ),
      'allowed_values_php' => '',
      'text_processing' => '0',
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
            'field_data_field_ercore_us_ethnicity' => array(
              'value' => 'field_ercore_us_ethnicity_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_ethnicity' => array(
              'value' => 'field_ercore_us_ethnicity_value',
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
      'type' => '2',
    ),
    'field_name' => 'field_ercore_us_ethnicity',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_fac_support.
  'field_ercore_us_fac_support' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Nobody in my research group receives salary support from EPSCoR.',
        'Somebody in my research group receives salary support from EPSCoR.',
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
            'field_data_field_ercore_us_fac_support' => array(
              'value' => 'field_ercore_us_fac_support_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_fac_support' => array(
              'value' => 'field_ercore_us_fac_support_value',
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
    'field_name' => 'field_ercore_us_fac_support',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_gender.
  'field_ercore_us_gender' => array(
    'type_name' => 'er_user_profile',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Male',
        'Female',
      ),
      'allowed_values_function' => '',
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => 0,
        3 => 0,
        1 => 0,
        2 => 0,
      ),
      'allowed_values_php' => '',
      'text_processing' => '0',
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
            'field_data_field_ercore_us_gender' => array(
              'value' => 'field_ercore_us_gender_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_gender' => array(
              'value' => 'field_ercore_us_gender_value',
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
      'type' => '2',
    ),
    'field_name' => 'field_ercore_us_gender',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_has_this_user.
  'field_ercore_us_has_this_user' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'I have not been put in touch with the Data Manager.',
        'I have been put in touch with the Data Manager.',
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
            'field_data_field_ercore_us_has_this_user' => array(
              'value' => 'field_ercore_us_has_this_user_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_has_this_user' => array(
              'value' => 'field_ercore_us_has_this_user_value',
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
    'field_name' => 'field_ercore_us_has_this_user',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_hired_date.
  'field_ercore_us_hired_date' => array(
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
      'todate' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_hired_date' => array(
              'value' => 'field_ercore_us_hired_date_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_hired_date' => array(
              'value' => 'field_ercore_us_hired_date_value',
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
    'field_name' => 'field_ercore_us_hired_date',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_inst_ref.
  'field_ercore_us_inst_ref' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'target_type' => 'node',
      'handler' => 'views',
      'handler_settings' => array(
        'view' => array(
          'view_name' => 'ercore_institution_reference',
          'display_name' => 'entityreference_2',
          'args' => array(),
        ),
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 1,
          ),
        ),
      ),
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => '6',
        3 => 0,
        1 => 0,
        2 => 0,
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
            'field_data_field_ercore_us_inst_ref' => array(
              'target_id' => 'field_ercore_us_inst_ref_target_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_inst_ref' => array(
              'target_id' => 'field_ercore_us_inst_ref_target_id',
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
    'field_name' => 'field_ercore_us_inst_ref',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_leadership_team.
  'field_ercore_us_leadership_team' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'I am not on the EPSCoR Management Team.',
        'I am on the EPSCoR Management Team.',
      ),
      'allowed_values_function' => '',
      'allowed_values_php' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_leadership_team' => array(
              'value' => 'field_ercore_us_leadership_team_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_leadership_team' => array(
              'value' => 'field_ercore_us_leadership_team_value',
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
    'field_name' => 'field_ercore_us_leadership_team',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_funding_src.
  'field_ercore_us_funding_src' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_funding_src' => array(
              'value' => 'field_ercore_us_funding_src_value',
              'format' => 'field_ercore_us_funding_src_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_funding_src' => array(
              'value' => 'field_ercore_us_funding_src_value',
              'format' => 'field_ercore_us_funding_src_format',
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
    'field_name' => 'field_ercore_us_funding_src',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_mnt_up.
  'field_ercore_us_mnt_up' => array(
    'type_name' => 'er_user_profile',
    'entity_types' => array(),
    'settings' => array(
      'display_field' => 0,
      'display_default' => 1,
      'uri_scheme' => 'public',
      'profile2_private' => FALSE,
      'user_role_field' => array(
        5 => '5',
        4 => 0,
        6 => 0,
        3 => 0,
        1 => 0,
        2 => 0,
      ),
      'description_field' => '0',
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
            'field_data_field_ercore_us_mnt_up' => array(
              'fid' => 'field_ercore_us_mnt_up_fid',
              'display' => 'field_ercore_us_mnt_up_display',
              'description' => 'field_ercore_us_mnt_up_description',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_mnt_up' => array(
              'fid' => 'field_ercore_us_mnt_up_fid',
              'display' => 'field_ercore_us_mnt_up_display',
              'description' => 'field_ercore_us_mnt_up_description',
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
    'field_name' => 'field_ercore_us_mnt_up',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_ment_signoff.
  'field_ercore_us_ment_signoff' => array(
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
      'todate' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_ment_signoff' => array(
              'value' => 'field_ercore_us_ment_signoff_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_ment_signoff' => array(
              'value' => 'field_ercore_us_ment_signoff_value',
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
    'field_name' => 'field_ercore_us_ment_signoff',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_months_of_effort.
  'field_ercore_us_months_of_effort' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        1 => '1',
        2 => '2',
        3 => '3',
        4 => '4',
        5 => '5',
        6 => '6',
        7 => '7',
        8 => '8',
        9 => '9',
        10 => '10',
        11 => '11',
        12 => '12',
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
            'field_data_field_ercore_us_months_of_effort' => array(
              'value' => 'field_ercore_us_months_of_effort_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_months_of_effort' => array(
              'value' => 'field_ercore_us_months_of_effort_value',
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
    'field_name' => 'field_ercore_us_months_of_effort',
    'type' => 'list_integer',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_sen_role.
  'field_ercore_us_sen_role' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Faculty participant (or equivalent)',
        'Technical support staff',
        'Non-technical support staff',
        'Post Doc',
        'Graduate student',
        'Undergraduate student',
        'Evaluation',
        'Other',
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
            'field_data_field_ercore_us_sen_role' => array(
              'value' => 'field_ercore_us_sen_role_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_sen_role' => array(
              'value' => 'field_ercore_us_sen_role_value',
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
      'type' => '2',
    ),
    'field_name' => 'field_ercore_us_sen_role',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_paid.
  'field_ercore_us_paid' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'I am not being paid by the EPSCoR grant.',
        'I am being paid by the EPSCoR grant.',
      ),
      'allowed_values_function' => '',
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => 0,
        3 => 0,
        1 => 0,
        2 => 0,
      ),
      'allowed_values_php' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_paid' => array(
              'value' => 'field_ercore_us_paid_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_paid' => array(
              'value' => 'field_ercore_us_paid_value',
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
    'field_name' => 'field_ercore_us_paid',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_part_date.
  'field_ercore_us_part_date' => array(
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
            'field_data_field_ercore_us_part_date' => array(
              'value' => 'field_ercore_us_part_date_value',
              'value2' => 'field_ercore_us_part_date_value2',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_part_date' => array(
              'value' => 'field_ercore_us_part_date_value',
              'value2' => 'field_ercore_us_part_date_value2',
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
    'field_name' => 'field_ercore_us_part_date',
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
      'value2' => array(
        'type' => 'datetime',
        'mysql_type' => 'datetime',
        'pgsql_type' => 'timestamp without time zone',
        'sqlite_type' => 'varchar',
        'sqlsrv_type' => 'smalldatetime',
        'not null' => FALSE,
        'sortable' => TRUE,
        'views' => FALSE,
      ),
    ),
    'bundles' => array(
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_person_month.
  'field_ercore_us_person_month' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        1 => '1',
        2 => '2',
        3 => '3',
        4 => '4',
        5 => '5',
        6 => '6',
        7 => '7',
        8 => '8',
        9 => '9',
        10 => '10',
        11 => '11',
        12 => '12',
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
            'field_data_field_ercore_us_person_month' => array(
              'value' => 'field_ercore_us_person_month_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_person_month' => array(
              'value' => 'field_ercore_us_person_month_value',
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
    'field_name' => 'field_ercore_us_person_month',
    'type' => 'list_integer',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_phone_personal.
  'field_ercore_us_phone_personal' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '20',
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => '6',
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
            'field_data_field_ercore_us_phone_personal' => array(
              'value' => 'field_ercore_us_phone_personal_value',
              'format' => 'field_ercore_us_phone_personal_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_phone_personal' => array(
              'value' => 'field_ercore_us_phone_personal_value',
              'format' => 'field_ercore_us_phone_personal_format',
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
      'type' => '2',
    ),
    'field_name' => 'field_ercore_us_phone_personal',
    'type' => 'text',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '20',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_phone_work.
  'field_ercore_us_phone_work' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '20',
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => '6',
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
            'field_data_field_ercore_us_phone_work' => array(
              'value' => 'field_ercore_us_phone_work_value',
              'format' => 'field_ercore_us_phone_work_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_phone_work' => array(
              'value' => 'field_ercore_us_phone_work_value',
              'format' => 'field_ercore_us_phone_work_format',
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
    'field_name' => 'field_ercore_us_phone_work',
    'type' => 'text',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '20',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_pro_link.
  'field_ercore_us_pro_link' => array(
    'type_name' => 'er_user_profile',
    'entity_types' => array(),
    'settings' => array(
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => '6',
        3 => '3',
        1 => 0,
        2 => 0,
      ),
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
      'validate_url' => 1,
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
            'field_data_field_ercore_us_pro_link' => array(
              'url' => 'field_ercore_us_pro_link_url',
              'title' => 'field_ercore_us_pro_link_title',
              'attributes' => 'field_ercore_us_pro_link_attributes',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_pro_link' => array(
              'url' => 'field_ercore_us_pro_link_url',
              'title' => 'field_ercore_us_pro_link_title',
              'attributes' => 'field_ercore_us_pro_link_attributes',
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
    'field_name' => 'field_ercore_us_pro_link',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_race.
  'field_ercore_us_race' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
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
            'field_data_field_ercore_us_race' => array(
              'value' => 'field_ercore_us_race_value',
              'format' => 'field_ercore_us_race_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_race' => array(
              'value' => 'field_ercore_us_race_value',
              'format' => 'field_ercore_us_race_format',
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
      'type' => '1',
    ),
    'field_name' => 'field_ercore_us_race',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_rcr_bool.
  'field_ercore_us_rcr_bool' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'I have not completed the RCR training.',
        'I have completed the RCR training.',
      ),
      'allowed_values_function' => '',
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
            'field_data_field_ercore_us_rcr_bool' => array(
              'value' => 'field_ercore_us_rcr_bool_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_rcr_bool' => array(
              'value' => 'field_ercore_us_rcr_bool_value',
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
    'field_name' => 'field_ercore_us_rcr_bool',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_rcr_in_person.
  'field_ercore_us_rcr_in_person' => array(
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
      'todate' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_rcr_in_person' => array(
              'value' => 'field_ercore_us_rcr_in_person_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_rcr_in_person' => array(
              'value' => 'field_ercore_us_rcr_in_person_value',
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
    'field_name' => 'field_ercore_us_rcr_in_person',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_rcr_inperson_ul.
  'field_ercore_us_rcr_inperson_ul' => array(
    'type_name' => 'er_user_profile',
    'entity_types' => array(),
    'settings' => array(
      'display_field' => 0,
      'display_default' => 1,
      'uri_scheme' => 'public',
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => 0,
        3 => 0,
        1 => 0,
        2 => 0,
      ),
      'description_field' => '0',
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
            'field_data_field_ercore_us_rcr_inperson_ul' => array(
              'fid' => 'field_ercore_us_rcr_inperson_ul_fid',
              'display' => 'field_ercore_us_rcr_inperson_ul_display',
              'description' => 'field_ercore_us_rcr_inperson_ul_description',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_rcr_inperson_ul' => array(
              'fid' => 'field_ercore_us_rcr_inperson_ul_fid',
              'display' => 'field_ercore_us_rcr_inperson_ul_display',
              'description' => 'field_ercore_us_rcr_inperson_ul_description',
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
    'field_name' => 'field_ercore_us_rcr_inperson_ul',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_rcr_online.
  'field_ercore_us_rcr_online' => array(
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
      'todate' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_rcr_online' => array(
              'value' => 'field_ercore_us_rcr_online_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_rcr_online' => array(
              'value' => 'field_ercore_us_rcr_online_value',
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
    'field_name' => 'field_ercore_us_rcr_online',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_rcr_online_up.
  'field_ercore_us_rcr_online_up' => array(
    'type_name' => 'er_user_profile',
    'entity_types' => array(),
    'settings' => array(
      'display_field' => 0,
      'display_default' => 1,
      'uri_scheme' => 'public',
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => 0,
        3 => 0,
        1 => 0,
        2 => 0,
      ),
      'description_field' => '0',
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
            'field_data_field_ercore_us_rcr_online_up' => array(
              'fid' => 'field_ercore_us_rcr_online_up_fid',
              'display' => 'field_ercore_us_rcr_online_up_display',
              'description' => 'field_ercore_us_rcr_online_up_description',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_rcr_online_up' => array(
              'fid' => 'field_ercore_us_rcr_online_up_fid',
              'display' => 'field_ercore_us_rcr_online_up_display',
              'description' => 'field_ercore_us_rcr_online_up_description',
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
    'field_name' => 'field_ercore_us_rcr_online_up',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_supervisor.
  'field_ercore_us_supervisor' => array(
    'type_name' => 'er_user_profile',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => 0,
        3 => 0,
        1 => 0,
        2 => 0,
      ),
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
            'field_data_field_ercore_us_supervisor' => array(
              'value' => 'field_ercore_us_supervisor_value',
              'format' => 'field_ercore_us_supervisor_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_supervisor' => array(
              'value' => 'field_ercore_us_supervisor_value',
              'format' => 'field_ercore_us_supervisor_format',
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
    'field_name' => 'field_ercore_us_supervisor',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_data_type.
  'field_ercore_us_data_type' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'profile2_private' => FALSE,
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
            'field_data_field_ercore_us_data_type' => array(
              'value' => 'field_ercore_us_data_type_value',
              'format' => 'field_ercore_us_data_type_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_data_type' => array(
              'value' => 'field_ercore_us_data_type_value',
              'format' => 'field_ercore_us_data_type_format',
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
    'field_name' => 'field_ercore_us_data_type',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_veteran_status.
  'field_ercore_us_veteran_status' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'I am not a veteran.',
        'I am a veteran.',
      ),
      'allowed_values_function' => '',
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => 0,
        3 => 0,
        1 => 0,
        2 => 0,
      ),
      'allowed_values_php' => '',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_veteran_status' => array(
              'value' => 'field_ercore_us_veteran_status_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_veteran_status' => array(
              'value' => 'field_ercore_us_veteran_status_value',
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
    'field_name' => 'field_ercore_us_veteran_status',
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
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_user_name.
  'field_user_name' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'components' => array(
        'title' => 'title',
        'given' => 'given',
        'middle' => 'middle',
        'family' => 'family',
        'generational' => 'generational',
        'credentials' => 'credentials',
      ),
      'minimum_components' => array(
        'given' => 'given',
        'family' => 'family',
        'title' => 0,
        'middle' => 0,
        'generational' => 0,
        'credentials' => 0,
      ),
      'labels' => array(
        'title' => 'Title',
        'given' => 'First Name',
        'middle' => 'Middle name(s)',
        'family' => 'Last Name',
        'generational' => 'Generational',
        'credentials' => 'Credentials',
      ),
      'max_length' => array(
        'title' => '31',
        'given' => '63',
        'middle' => '127',
        'family' => '63',
        'generational' => '15',
        'credentials' => '255',
      ),
      'autocomplete_source' => array(
        'title' => array(
          'title' => 'title',
        ),
        'given' => array(),
        'middle' => array(),
        'family' => array(),
        'generational' => array(
          'generational' => 0,
        ),
        'credentials' => array(),
      ),
      'autocomplete_separator' => array(
        'title' => ' ',
        'given' => ' -',
        'middle' => ' -',
        'family' => ' -',
        'generational' => ' ',
        'credentials' => ', ',
      ),
      'allow_family_or_given' => 0,
      'title_options' => "-- --\r\nMr.\r\nMrs.\r\nMiss\r\nMs.\r\nDr.\r\nProf.",
      'generational_options' => "-- --\r\nJr.\r\nSr.\r\nI\r\nII\r\nIII\r\nIV\r\nV\r\nVI\r\nVII\r\nVIII\r\nIX\r\nX",
      'sort_options' => array(
        'title' => 'title',
        'generational' => 0,
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
            'field_data_field_user_name' => array(
              'title' => 'field_user_name_title',
              'given' => 'field_user_name_given',
              'middle' => 'field_user_name_middle',
              'family' => 'field_user_name_family',
              'generational' => 'field_user_name_generational',
              'credentials' => 'field_user_name_credentials',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_user_name' => array(
              'title' => 'field_user_name_title',
              'given' => 'field_user_name_given',
              'middle' => 'field_user_name_middle',
              'family' => 'field_user_name_family',
              'generational' => 'field_user_name_generational',
              'credentials' => 'field_user_name_credentials',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'given' => array(
        'given',
      ),
      'family' => array(
        'family',
      ),
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_user_name',
    'type' => 'name',
    'module' => 'name',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'title' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
      'given' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
      'middle' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
      'family' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
      'generational' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
      'credentials' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'user' => array(
        'user',
      ),
    ),
  ),

// FIELD: field_ercore_us_emp_id.
  'field_ercore_us_emp_id' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '25',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_us_emp_id' => array(
              'value' => 'field_ercore_us_emp_id_value',
              'format' => 'field_ercore_us_emp_id_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_us_emp_id' => array(
              'value' => 'field_ercore_us_emp_id_value',
              'format' => 'field_ercore_us_emp_id_format',
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
      'type' => '1',
    ),
    'field_name' => 'field_ercore_us_emp_id',
    'type' => 'text',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '25',
        'not null' => FALSE,
      ),
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'user' => array(
        'user',
      ),
    ),
  ),
);
