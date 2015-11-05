<?php
/**
 * @file
 * Includes array of ERCore Publication field definitions.
 */

$ercore_publication_definitions = array(
// FIELD: field_ercore_pb_ark
  'field_ercore_pb_ark' => array(
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
            'field_data_field_ercore_pb_ark' => array(
              'value' => 'field_ercore_pb_ark_value',
              'format' => 'field_ercore_pb_ark_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_ark' => array(
              'value' => 'field_ercore_pb_ark_value',
              'format' => 'field_ercore_pb_ark_format',
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
    'field_name' => 'field_ercore_pb_ark',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_coll_title
  'field_ercore_pb_coll_title' => array(
    'type_name' => 'ercore_book',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => 255,
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
            'field_data_field_ercore_pb_coll_title' => array(
              'value' => 'field_ercore_pb_coll_title_value',
              'format' => 'field_ercore_pb_coll_title_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_coll_title' => array(
              'value' => 'field_ercore_pb_coll_title_value',
              'format' => 'field_ercore_pb_coll_title_format',
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
    'field_name' => 'field_ercore_pb_coll_title',
    'type' => 'text',
    'module' => 'text',
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
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_doi
  'field_ercore_pb_doi' => array(
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
            'field_data_field_ercore_pb_doi' => array(
              'value' => 'field_ercore_pb_doi_value',
              'format' => 'field_ercore_pb_doi_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_doi' => array(
              'value' => 'field_ercore_pb_doi_value',
              'format' => 'field_ercore_pb_doi_format',
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
    'field_name' => 'field_ercore_pb_doi',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_epscor
  'field_ercore_pb_epscor' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Yes',
        'No',
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
            'field_data_field_ercore_pb_epscor' => array(
              'value' => 'field_ercore_pb_epscor_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_epscor' => array(
              'value' => 'field_ercore_pb_epscor_value',
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
    'field_name' => 'field_ercore_pb_epscor',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_citation
  'field_ercore_pb_citation' => array(
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
            'field_data_field_ercore_pb_citation' => array(
              'value' => 'field_ercore_pb_citation_value',
              'format' => 'field_ercore_pb_citation_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_citation' => array(
              'value' => 'field_ercore_pb_citation_value',
              'format' => 'field_ercore_pb_citation_format',
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
    'field_name' => 'field_ercore_pb_citation',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_journal_name
  'field_ercore_pb_journal_name' => array(
    'type_name' => 'ercore_publication',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => 255,
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
            'field_data_field_ercore_pb_journal_name' => array(
              'value' => 'field_ercore_pb_journal_name_value',
              'format' => 'field_ercore_pb_journal_name_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_journal_name' => array(
              'value' => 'field_ercore_pb_journal_name_value',
              'format' => 'field_ercore_pb_journal_name_format',
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
    'field_name' => 'field_ercore_pb_journal_name',
    'type' => 'text',
    'module' => 'text',
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
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_journal_pages
  'field_ercore_pb_journal_pages' => array(
    'type_name' => 'ercore_publication',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => 255,
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
            'field_data_field_ercore_pb_journal_pages' => array(
              'value' => 'field_ercore_pb_journal_pages_value',
              'format' => 'field_ercore_pb_journal_pages_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_journal_pages' => array(
              'value' => 'field_ercore_pb_journal_pages_value',
              'format' => 'field_ercore_pb_journal_pages_format',
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
    'field_name' => 'field_ercore_pb_journal_pages',
    'type' => 'text',
    'module' => 'text',
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
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_journal_volume
  'field_ercore_pb_journal_volume' => array(
    'type_name' => 'ercore_publication',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => 255,
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
            'field_data_field_ercore_pb_journal_volume' => array(
              'value' => 'field_ercore_pb_journal_volume_value',
              'format' => 'field_ercore_pb_journal_volume_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_journal_volume' => array(
              'value' => 'field_ercore_pb_journal_volume_value',
              'format' => 'field_ercore_pb_journal_volume_format',
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
    'field_name' => 'field_ercore_pb_journal_volume',
    'type' => 'text',
    'module' => 'text',
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
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_link
  'field_ercore_pb_link' => array(
    'type_name' => 'ercore_publication',
    'entity_types' => array(),
    'settings' => array(
      'attributes' => array(
        'target' => '',
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
            'field_data_field_ercore_pb_link' => array(
              'url' => 'field_ercore_pb_link_url',
              'title' => 'field_ercore_pb_link_title',
              'attributes' => 'field_ercore_pb_link_attributes',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_link' => array(
              'url' => 'field_ercore_pb_link_url',
              'title' => 'field_ercore_pb_link_title',
              'attributes' => 'field_ercore_pb_link_attributes',
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
    'field_name' => 'field_ercore_pb_link',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_nonepscor_auth
  'field_ercore_pb_nonepscor_auth' => array(
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
            'field_data_field_ercore_pb_nonepscor_auth' => array(
              'value' => 'field_ercore_pb_nonepscor_auth_value',
              'format' => 'field_ercore_pb_nonepscor_auth_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_nonepscor_auth' => array(
              'value' => 'field_ercore_pb_nonepscor_auth_value',
              'format' => 'field_ercore_pb_nonepscor_auth_format',
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
    'field_name' => 'field_ercore_pb_nonepscor_auth',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_peer_reviewed
  'field_ercore_pb_peer_reviewed' => array(
    'type_name' => 'ercore_publication',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'No',
        'Yes',
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
            'field_data_field_ercore_pb_peer_reviewed' => array(
              'value' => 'field_ercore_pb_peer_reviewed_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_peer_reviewed' => array(
              'value' => 'field_ercore_pb_peer_reviewed_value',
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
    'field_name' => 'field_ercore_pb_peer_reviewed',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_archived
  'field_ercore_pb_archived' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Not Yet',
        'EPSCoR Repository',
        'Another Repository',
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
            'field_data_field_ercore_pb_archived' => array(
              'value' => 'field_ercore_pb_archived_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_archived' => array(
              'value' => 'field_ercore_pb_archived_value',
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
    'field_name' => 'field_ercore_pb_archived',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_data
  'field_ercore_pb_data' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'No',
        'Yes',
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
            'field_data_field_ercore_pb_data' => array(
              'value' => 'field_ercore_pb_data_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_data' => array(
              'value' => 'field_ercore_pb_data_value',
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
    'field_name' => 'field_ercore_pb_data',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_arch_name
  'field_ercore_pb_arch_name' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '255',
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
            'field_data_field_ercore_pb_arch_name' => array(
              'value' => 'field_ercore_pb_arch_name_value',
              'format' => 'field_ercore_pb_arch_name_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_arch_name' => array(
              'value' => 'field_ercore_pb_arch_name_value',
              'format' => 'field_ercore_pb_arch_name_format',
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
    'field_name' => 'field_ercore_pb_arch_name',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_date
  'field_ercore_pb_date' => array(
    'type_name' => 'ercore_publication',
    'entity_types' => array(),
    'settings' => array(
      'granularity' => array(
        'year' => 'year',
        'month' => 'month',
        'day' => 0,
        'hour' => 0,
        'minute' => 0,
        'second' => 0,
      ),
      'tz_handling' => 'none',
      'timezone_db' => '',
      'cache_enabled' => 0,
      'cache_count' => '4',
      'repeat' => 0,
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
            'field_data_field_ercore_pb_date' => array(
              'value' => 'field_ercore_pb_date_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_date' => array(
              'value' => 'field_ercore_pb_date_value',
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
    'field_name' => 'field_ercore_pb_date',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_status
  'field_ercore_pb_status' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        2 => 'Submitted - Under Review',
        1 => 'Accepted - Awaiting Publication',
        0 => 'Published',
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
            'field_data_field_ercore_pb_status' => array(
              'value' => 'field_ercore_pb_status_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_status' => array(
              'value' => 'field_ercore_pb_status_value',
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
    'field_name' => 'field_ercore_pb_status',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_submit_date
  'field_ercore_pb_submit_date' => array(
    'type_name' => 'ercore_publication',
    'entity_types' => array(),
    'settings' => array(
      'granularity' => array(
        'year' => 'year',
        'month' => 'month',
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'second' => 0,
      ),
      'tz_handling' => 'none',
      'timezone_db' => '',
      'cache_enabled' => 0,
      'cache_count' => '4',
      'repeat' => 0,
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
            'field_data_field_ercore_pb_submit_date' => array(
              'value' => 'field_ercore_pb_submit_date_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_submit_date' => array(
              'value' => 'field_ercore_pb_submit_date_value',
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
    'field_name' => 'field_ercore_pb_submit_date',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_type
  'field_ercore_pb_type' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'Journal Article' => 'Journal Article',
        'Abstract' => 'Abstract',
        'Book' => 'Book',
        'Conference Proceedings' => 'Conference Proceedings',
        'Magazine Article' => 'Magazine Article',
        'Technical Report' => 'Technical Report',
        'Newspaper Article' => 'Newspaper Article',
        'Thesis/Dissertation' => 'Thesis/Dissertation',
        'Internet Dissemination' => 'Internet Dissemination',
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
            'field_data_field_ercore_pb_type' => array(
              'value' => 'field_ercore_pb_type_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_type' => array(
              'value' => 'field_ercore_pb_type_value',
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
    'field_name' => 'field_ercore_pb_type',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_publisher
  'field_ercore_pb_publisher' => array(
    'type_name' => 'ercore_book',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => 255,
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
            'field_data_field_ercore_pb_publisher' => array(
              'value' => 'field_ercore_pb_publisher_value',
              'format' => 'field_ercore_pb_publisher_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_publisher' => array(
              'value' => 'field_ercore_pb_publisher_value',
              'format' => 'field_ercore_pb_publisher_format',
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
    'field_name' => 'field_ercore_pb_publisher',
    'type' => 'text',
    'module' => 'text',
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
      'format' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => FALSE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_rii_support
  'field_ercore_pb_rii_support' => array(
    'type_name' => 'ercore_publication',
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
            'field_data_field_ercore_pb_rii_support' => array(
              'value' => 'field_ercore_pb_rii_support_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_rii_support' => array(
              'value' => 'field_ercore_pb_rii_support_value',
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
    'field_name' => 'field_ercore_pb_rii_support',
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
        'ercore_publication',
      ),
    ),
  ),

// FIELD: field_ercore_pb_upload
  'field_ercore_pb_upload' => array(
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
            'field_data_field_ercore_pb_upload' => array(
              'fid' => 'field_ercore_pb_upload_fid',
              'display' => 'field_ercore_pb_upload_display',
              'description' => 'field_ercore_pb_upload_description',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_pb_upload' => array(
              'fid' => 'field_ercore_pb_upload_fid',
              'display' => 'field_ercore_pb_upload_display',
              'description' => 'field_ercore_pb_upload_description',
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
    'field_name' => 'field_ercore_pb_upload',
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
        'ercore_publication',
      ),
    ),
  ),
);
