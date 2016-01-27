<?php
/**
 * @file
 * Includes array of ERCore Other Product field definitions.
 */

$ercore_other_product_definitions = array(
  // FIELD: field_ercore_op_non_epscor.
  'field_ercore_op_non_epscor' => array(
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
            'field_data_field_ercore_op_non_epscor' => array(
              'value' => 'field_ercore_op_non_epscor_value',
              'format' => 'field_ercore_op_non_epscor_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_op_non_epscor' => array(
              'value' => 'field_ercore_op_non_epscor_value',
              'format' => 'field_ercore_op_non_epscor_format',
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
    'field_name' => 'field_ercore_op_non_epscor',
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
        'ercore_other_product',
      ),
    ),
  ),

// FIELD: field_ercore_op_description.
  'field_ercore_op_description' => array(
    'type_name' => 'er_user_profile',
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
            'field_data_field_ercore_op_description' => array(
              'value' => 'field_ercore_op_description_value',
              'format' => 'field_ercore_op_description_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_op_description' => array(
              'value' => 'field_ercore_op_description_value',
              'format' => 'field_ercore_op_description_format',
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
    'field_name' => 'field_ercore_op_description',
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
        'ercore_other_product',
      ),
    ),
  ),

// FIELD: field_ercore_nsf.
  'field_ercore_nsf' => array(
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        1 => 'Acknowledged',
        0 => 'Not Acknowledged',
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
            'field_data_field_ercore_nsf' => array(
              'value' => 'field_ercore_nsf_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_nsf' => array(
              'value' => 'field_ercore_nsf_value',
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
    'field_name' => 'field_ercore_nsf',
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
        'ercore_other_product',
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_op_date.
  'field_ercore_op_date' => array(
    'type_name' => 'ercore_other_product',
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
            'field_data_field_ercore_op_date' => array(
              'value' => 'field_ercore_op_date_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_op_date' => array(
              'value' => 'field_ercore_op_date_value',
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
    'field_name' => 'field_ercore_op_date',
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
        'ercore_other_product',
      ),
    ),
  ),

// FIELD: field_ercore_op_type.
  'field_ercore_op_type' => array(
    'type_name' => 'ercore_other_product',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Data or Database',
        'Physical collection',
        'Audio or Video',
        'Software',
        'Educational aid',
        'Instrument or Equipment',
        'Other Invention',
        'Website',
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
            'field_data_field_ercore_op_type' => array(
              'value' => 'field_ercore_op_type_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_op_type' => array(
              'value' => 'field_ercore_op_type_value',
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
    'field_name' => 'field_ercore_op_type',
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
        'ercore_other_product',
      ),
    ),
  ),

// FIELD: field_ercore_op_rii_support.
  'field_ercore_op_rii_support' => array(
    'type_name' => 'er_publication',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Primary',
        'Partial',
        'None',
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
            'field_data_field_ercore_op_rii_support' => array(
              'value' => 'field_ercore_op_rii_support_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_op_rii_support' => array(
              'value' => 'field_ercore_op_rii_support_value',
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
    'field_name' => 'field_ercore_op_rii_support',
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
        'ercore_other_product',
      ),
    ),
  ),

// FIELD: field_ercore_op_website.
  'field_ercore_op_website' => array(
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
            'field_data_field_ercore_op_website' => array(
              'url' => 'field_ercore_op_website_url',
              'title' => 'field_ercore_op_website_title',
              'attributes' => 'field_ercore_op_website_attributes',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_op_website' => array(
              'url' => 'field_ercore_op_website_url',
              'title' => 'field_ercore_op_website_title',
              'attributes' => 'field_ercore_op_website_attributes',
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
    'field_name' => 'field_ercore_op_website',
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
        'ercore_other_product',
      ),
    ),
  ),
);
