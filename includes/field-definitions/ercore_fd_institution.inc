<?php
/**
 * @file
 * Includes array of ERCore Institution field definitions.
 */

$ercore_institution_definitions = array(
// FIELD: field_ercore_in_abbr.
  'in_field_ercore_in_abbr' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
      'profile2_private' => 0,
      'user_role_field' => array(
        4 => '4',
        6 => '6',
        5 => 0,
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
            'field_data_field_ercore_in_abbr' => array(
              'value' => 'field_ercore_in_abbr_value',
              'format' => 'field_ercore_in_abbr_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_in_abbr' => array(
              'value' => 'field_ercore_in_abbr_value',
              'format' => 'field_ercore_in_abbr_format',
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
    'field_name' => 'field_ercore_in_abbr',
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
        'ercore_institution',
      ),
    ),
  ),

// FIELD: field_ercore_in_category.
  'in_field_ercore_in_category' => array(
    'type_name' => 'ercore_institution',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'hispanic' => 'Hispanic Serving Institutions',
        'tribal' => 'Tribal Colleges and Universities',
        'black' => 'Historically Black Colleges and Universities',
        'academic' => 'Academic Research Institutions',
        'undergrad' => 'Primarily Undergraduate Institutions',
        'lab' => 'National Laboratories',
        'industry' => 'Industry',
        'none' => 'None/Other',
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
            'field_data_field_ercore_in_category' => array(
              'value' => 'field_ercore_in_category_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_in_category' => array(
              'value' => 'field_ercore_in_category_value',
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
    'field_name' => 'field_ercore_in_category',
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
        'ercore_institution',
      ),
    ),
  ),

// FIELD: field_ercore_in_country.
  'in_field_ercore_in_country' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
      'user_role_field' => array(
        6 => '6',
        5 => 0,
        4 => 0,
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
            'field_data_field_ercore_in_country' => array(
              'value' => 'field_ercore_in_country_value',
              'format' => 'field_ercore_in_country_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_in_country' => array(
              'value' => 'field_ercore_in_country_value',
              'format' => 'field_ercore_in_country_format',
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
    'field_name' => 'field_ercore_in_country',
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
        'ercore_institution',
      ),
    ),
  ),

// FIELD: field_ercore_in_link.
  'in_field_ercore_in_link' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'user_role_field' => array(
        4 => '4',
        6 => '6',
        5 => 0,
        3 => 0,
        1 => 0,
        2 => 0,
      ),
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
            'field_data_field_ercore_in_link' => array(
              'url' => 'field_ercore_in_link_url',
              'title' => 'field_ercore_in_link_title',
              'attributes' => 'field_ercore_in_link_attributes',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_in_link' => array(
              'url' => 'field_ercore_in_link_url',
              'title' => 'field_ercore_in_link_title',
              'attributes' => 'field_ercore_in_link_attributes',
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
    'field_name' => 'field_ercore_in_link',
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
        'ercore_institution',
      ),
    ),
  ),

// FIELD: field_ercore_in_participating.
  'in_field_ercore_in_participating' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Non-participating Institution',
        'Participating Institution',
      ),
      'allowed_values_function' => '',
      'profile2_private' => 0,
      'user_role_field' => array(
        5 => '5',
        4 => '4',
        6 => '6',
        3 => '3',
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
            'field_data_field_ercore_in_participating' => array(
              'value' => 'field_ercore_in_participating_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_in_participating' => array(
              'value' => 'field_ercore_in_participating_value',
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
    'field_name' => 'field_ercore_in_participating',
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
        'ercore_institution',
      ),
    ),
  ),

// FIELD: field_ercore_in_type.
  'in_field_ercore_in_type' => array(
    'type_name' => 'ercore_institution',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'local' => 'Local (in state)',
        'domestic' => 'Domestic (US)',
        'foreign' => 'Foreign (international)',
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
            'field_data_field_ercore_in_type' => array(
              'value' => 'field_ercore_in_type_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_in_type' => array(
              'value' => 'field_ercore_in_type_value',
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
    'field_name' => 'field_ercore_in_type',
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
        'ercore_institution',
      ),
    ),
  ),
);
