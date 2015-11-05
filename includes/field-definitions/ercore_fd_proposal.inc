<?php
/**
 * @file
 * Includes array of ERCore Proposal field definitions.
 */

$ercore_proposal_definitions = array(
  // FIELD: field_ercore_pp_award_amount
  'field_ercore_pp_award_amount' => array(
    'type_name' => 'ercore_proposal',
    'entity_types' => array(),
    'settings' => array(
      'decimal_separator' => '.',
      'prefix' => '$',
      'suffix' => '',
      'min' => '0',
      'max' => '',
      'allowed_values' => array(),
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
            'field_data_field_ercore_pp_award_amount' => array(
              'value' => 'field_ercore_pp_award_amount_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pp_award_amount' => array(
              'value' => 'field_ercore_pp_award_amount_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_ercore_pp_award_amount',
    'type' => 'number_float',
    'module' => 'number',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'float',
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_proposal',
      ),
    ),
  ),

// FIELD: field_ercore_pp_award_req_dec
  'field_ercore_pp_award_req_dec' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'precision' => '12',
      'scale' => '2',
      'decimal_separator' => '.',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_pp_award_req_dec' => array(
              'value' => 'field_ercore_pp_award_req_dec_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pp_award_req_dec' => array(
              'value' => 'field_ercore_pp_award_req_dec_value',
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
    'field_name' => 'field_ercore_pp_award_req_dec',
    'type' => 'number_decimal',
    'module' => 'number',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'numeric',
        'precision' => '12',
        'scale' => '2',
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_proposal',
      ),
    ),
  ),

// FIELD: field_ercore_pp_location
  'field_ercore_pp_location' => array(
    'type_name' => 'ercore_proposal',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
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
            'field_data_field_ercore_pp_location' => array(
              'value' => 'field_ercore_pp_location_value',
              'format' => 'field_ercore_pp_location_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pp_location' => array(
              'value' => 'field_ercore_pp_location_value',
              'format' => 'field_ercore_pp_location_format',
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
    'field_name' => 'field_ercore_pp_location',
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
        'ercore_proposal',
      ),
    ),
  ),

// FIELD: field_ercore_pp_other_pi
  'field_ercore_pp_other_pi' => array(
    'type_name' => 'ercore_proposal',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
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
            'field_data_field_ercore_pp_other_pi' => array(
              'value' => 'field_ercore_pp_other_pi_value',
              'format' => 'field_ercore_pp_other_pi_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pp_other_pi' => array(
              'value' => 'field_ercore_pp_other_pi_value',
              'format' => 'field_ercore_pp_other_pi_format',
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
    'field_name' => 'field_ercore_pp_other_pi',
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
        'ercore_proposal',
      ),
    ),
  ),

// FIELD: field_ercore_pp_proposal_date
  'field_ercore_pp_proposal_date' => array(
    'type_name' => 'ercore_proposal',
    'entity_types' => array(),
    'settings' => array(
      'todate' => 'optional',
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
            'field_data_field_ercore_pp_proposal_date' => array(
              'value' => 'field_ercore_pp_proposal_date_value',
              'value2' => 'field_ercore_pp_proposal_date_value2',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pp_proposal_date' => array(
              'value' => 'field_ercore_pp_proposal_date_value',
              'value2' => 'field_ercore_pp_proposal_date_value2',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_ercore_pp_proposal_date',
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
      'node' => array(
        'ercore_proposal',
      ),
    ),
  ),

// FIELD: field_ercore_pp_proposal_denied
  'field_ercore_pp_proposal_denied' => array(
    'type_name' => 'ercore_proposal',
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
            'field_data_field_ercore_pp_proposal_denied' => array(
              'value' => 'field_ercore_pp_proposal_denied_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pp_proposal_denied' => array(
              'value' => 'field_ercore_pp_proposal_denied_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_ercore_pp_proposal_denied',
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
        'ercore_proposal',
      ),
    ),
  ),

// FIELD: field_ercore_pp_proposal_paid
  'field_ercore_pp_proposal_paid' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Participants are NOT receiving financial support',
        'Participants are receiving financial support',
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
            'field_data_field_ercore_pp_proposal_paid' => array(
              'value' => 'field_ercore_pp_proposal_paid_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pp_proposal_paid' => array(
              'value' => 'field_ercore_pp_proposal_paid_value',
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
    'field_name' => 'field_ercore_pp_proposal_paid',
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
      'node' => array(
        'ercore_proposal',
      ),
    ),
  ),

// FIELD: field_ercore_pp_proposal_pending
  'field_ercore_pp_proposal_pending' => array(
    'type_name' => 'ercore_proposal',
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
            'field_data_field_ercore_pp_proposal_pending' => array(
              'value' => 'field_ercore_pp_proposal_pending_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pp_proposal_pending' => array(
              'value' => 'field_ercore_pp_proposal_pending_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_ercore_pp_proposal_pending',
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
        'ercore_proposal',
      ),
    ),
  ),

// FIELD: field_ercore_pp_proposal_status
  'field_ercore_pp_proposal_status' => array(
    'type_name' => 'ercore_proposal',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Submitted' => 'Submitted',
        'Pending' => 'Pending',
        'Awarded' => 'Awarded',
        'Expired' => 'Expired',
        'Denied' => 'Denied',
      ),
      'allowed_values_function' => '',
      'text_processing' => '0',
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
            'field_data_field_ercore_pp_proposal_status' => array(
              'value' => 'field_ercore_pp_proposal_status_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pp_proposal_status' => array(
              'value' => 'field_ercore_pp_proposal_status_value',
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
    'field_name' => 'field_ercore_pp_proposal_status',
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
        'ercore_proposal',
      ),
    ),
  ),

// FIELD: field_ercore_pp_proposal_submit
  'field_ercore_pp_proposal_submit' => array(
    'type_name' => 'ercore_proposal',
    'entity_types' => array(),
    'settings' => array(
      'granularity' => array(
        'month' => 'month',
        'day' => 'day',
        'year' => 'year',
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
    'translatable' => '0',
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_pp_proposal_submit' => array(
              'value' => 'field_ercore_pp_proposal_submit_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pp_proposal_submit' => array(
              'value' => 'field_ercore_pp_proposal_submit_value',
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
    'field_name' => 'field_ercore_pp_proposal_submit',
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
        'ercore_proposal',
      ),
    ),
  ),

// FIELD: field_ercore_pp_support
  'field_ercore_pp_support' => array(
    'type_name' => 'ercore_proposal',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
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
            'field_data_field_ercore_pp_support' => array(
              'value' => 'field_ercore_pp_support_value',
              'format' => 'field_ercore_pp_support_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pp_support' => array(
              'value' => 'field_ercore_pp_support_value',
              'format' => 'field_ercore_pp_support_format',
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
    'field_name' => 'field_ercore_pp_support',
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
        'ercore_proposal',
      ),
    ),
  ),

// FIELD: field_ercore_pp_support_type
  'field_ercore_pp_support_type' => array(
    'type_name' => 'ercore_proposal',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Other NSF',
        'Other Gov',
        'Other',
      ),
      'allowed_values_function' => '',
      'prefix' => '',
      'suffix' => '',
      'min' => '',
      'max' => '',
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
            'field_data_field_ercore_pp_support_type' => array(
              'value' => 'field_ercore_pp_support_type_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pp_support_type' => array(
              'value' => 'field_ercore_pp_support_type_value',
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
    'field_name' => 'field_ercore_pp_support_type',
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
      'node' => array(
        'ercore_proposal',
      ),
    ),
  ),

// FIELD: field_ercore_pp_others
  'field_ercore_pp_others' => array(
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
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_pp_others' => array(
              'target_id' => 'field_ercore_pp_others_target_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pp_others' => array(
              'target_id' => 'field_ercore_pp_others_target_id',
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
    'field_name' => 'field_ercore_pp_others',
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
        'ercore_proposal',
      ),
    ),
  ),

);
