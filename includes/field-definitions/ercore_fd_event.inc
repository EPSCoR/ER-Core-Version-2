<?php
/**
 * @file
 * Includes array of ERCore Event field definitions.
 */

$ercore_event_definitions = array(
// FIELD: field_ercore_ev_date.
  'ev_field_ercore_ev_date' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'granularity' => array(
        'month' => 'month',
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'year' => 'year',
        'second' => 0,
      ),
      'tz_handling' => 'site',
      'timezone_db' => 'UTC',
      'cache_enabled' => 0,
      'cache_count' => '4',
      'repeat' => '1',
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
            'field_data_field_ercore_ev_date' => array(
              'value' => 'field_ercore_ev_date_value',
              'value2' => 'field_ercore_ev_date_value2',
              'rrule' => 'field_ercore_ev_date_rrule',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ev_date' => array(
              'value' => 'field_ercore_ev_date_value',
              'value2' => 'field_ercore_ev_date_value2',
              'rrule' => 'field_ercore_ev_date_rrule',
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
    'field_name' => 'field_ercore_ev_date',
    'type' => 'date',
    'module' => 'date',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '-1',
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
      'rrule' => array(
        'type' => 'text',
        'not null' => FALSE,
        'sortable' => FALSE,
        'views' => FALSE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_event',
      ),
    ),
  ),

// FIELD: field_ercore_ev_url.
  'ev_field_ercore_ev_url' => array(
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
            'field_data_field_ercore_ev_url' => array(
              'url' => 'field_ercore_ev_url_url',
              'title' => 'field_ercore_ev_url_title',
              'attributes' => 'field_ercore_ev_url_attributes',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ev_url' => array(
              'url' => 'field_ercore_ev_url_url',
              'title' => 'field_ercore_ev_url_title',
              'attributes' => 'field_ercore_ev_url_attributes',
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
    'field_name' => 'field_ercore_ev_url',
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
        'ercore_event',
      ),
    ),
  ),

// FIELD: field_ercore_ev_type.
  'ev_field_ercore_ev_type' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'max_length' => '64',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_ev_type' => array(
              'value' => 'field_ercore_ev_type_value',
              'format' => 'field_ercore_ev_type_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ev_type' => array(
              'value' => 'field_ercore_ev_type_value',
              'format' => 'field_ercore_ev_type_format',
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
    'field_name' => 'field_ercore_ev_type',
    'type' => 'text',
    'module' => 'text',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
    'deleted' => '0',
    'columns' => array(
      'value' => array(
        'type' => 'varchar',
        'length' => '64',
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
        'ercore_event',
      ),
    ),
  ),

// FIELD: field_ercore_ev_reminders.
  'ev_field_ercore_ev_reminders' => array(
    'translatable' => '0',
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_ev_reminders' => array(
              'value' => 'field_ercore_ev_reminders_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ev_reminders' => array(
              'value' => 'field_ercore_ev_reminders_value',
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
    'entity_types' => array(),
    'settings' => array(
      'allowed_values' => array(
        'No',
        'Yes',
      ),
      'allowed_values_function' => '',
    ),
    'field_permissions' => array(
      'type' => '0',
    ),
    'field_name' => 'field_ercore_ev_reminders',
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
        'ercore_event',
      ),
    ),
  ),

// FIELD: field_ercore_ev_document.
  'ev_field_ercore_ev_document' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'display_field' => 0,
      'display_default' => 0,
      'uri_scheme' => 'public',
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_ev_document' => array(
              'fid' => 'field_ercore_ev_document_fid',
              'display' => 'field_ercore_ev_document_display',
              'description' => 'field_ercore_ev_document_description',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ev_document' => array(
              'fid' => 'field_ercore_ev_document_fid',
              'display' => 'field_ercore_ev_document_display',
              'description' => 'field_ercore_ev_document_description',
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
    'field_name' => 'field_ercore_ev_document',
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
      'node' => array(
        'ercore_event',
      ),
    ),
  ),

// FIELD: field_ercore_ev_location.
  'ev_field_ercore_ev_location' => array(
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
            'field_data_field_ercore_ev_location' => array(
              'value' => 'field_ercore_ev_location_value',
              'format' => 'field_ercore_ev_location_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ev_location' => array(
              'value' => 'field_ercore_ev_location_value',
              'format' => 'field_ercore_ev_location_format',
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
    'field_name' => 'field_ercore_ev_location',
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
        'ercore_event',
      ),
    ),
  ),

// FIELD: field_ercore_ev_room.
  'ev_field_ercore_ev_room' => array(
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
            'field_data_field_ercore_ev_room' => array(
              'value' => 'field_ercore_ev_room_value',
              'format' => 'field_ercore_ev_room_format',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ev_room' => array(
              'value' => 'field_ercore_ev_room_value',
              'format' => 'field_ercore_ev_room_format',
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
    'field_name' => 'field_ercore_ev_room',
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
        'ercore_event',
      ),
    ),
  ),

// FIELD: field_ercore_ev_engagement.
  'ev_field_ercore_ev_engagement' => array(
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
            'field_data_field_ercore_ev_engagement' => array(
              'value' => 'field_ercore_ev_engagement_value',
              'revision_id' => 'field_ercore_ev_engagement_revision_id',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_ev_engagement' => array(
              'value' => 'field_ercore_ev_engagement_value',
              'revision_id' => 'field_ercore_ev_engagement_revision_id',
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
    'field_name' => 'field_ercore_ev_engagement',
    'type' => 'field_collection',
    'module' => 'field_collection',
    'active' => '1',
    'locked' => '0',
    'cardinality' => '1',
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
        'ercore_event',
      ),
    ),
  ),
);
