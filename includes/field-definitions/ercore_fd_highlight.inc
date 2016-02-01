<?php
/**
 * @file
 * Includes array of ERCore Highlight field definitions.
 */

$ercore_highlight_definitions = array(
// FIELD: field_ercore_hi_date.
  'hi_field_ercore_hi_date' => array(
    'translatable' => '0',
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
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_hi_date' => array(
              'value' => 'field_ercore_hi_date_value',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_hi_date' => array(
              'value' => 'field_ercore_hi_date_value',
            ),
          ),
        ),
      ),
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'field_name' => 'field_ercore_hi_date',
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
    ),
    'bundles' => array(
      'node' => array(
        'ercore_j_highlight',
      ),
    ),
  ),

// FIELD: field_ercore_hi_image.
  'hi_field_ercore_hi_image' => array(
    'translatable' => '0',
    'entity_types' => array(),
    'settings' => array(
      'uri_scheme' => 'public',
      'default_image' => 0,
    ),
    'storage' => array(
      'type' => 'field_sql_storage',
      'settings' => array(),
      'module' => 'field_sql_storage',
      'active' => '1',
      'details' => array(
        'sql' => array(
          'FIELD_LOAD_CURRENT' => array(
            'field_data_field_ercore_hi_image' => array(
              'fid' => 'field_ercore_hi_image_fid',
              'alt' => 'field_ercore_hi_image_alt',
              'title' => 'field_ercore_hi_image_title',
              'width' => 'field_ercore_hi_image_width',
              'height' => 'field_ercore_hi_image_height',
            ),
          ),
          'FIELD_LOAD_REVISION' => array(
            'field_revision_field_ercore_hi_image' => array(
              'fid' => 'field_ercore_hi_image_fid',
              'alt' => 'field_ercore_hi_image_alt',
              'title' => 'field_ercore_hi_image_title',
              'width' => 'field_ercore_hi_image_width',
              'height' => 'field_ercore_hi_image_height',
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
    'field_name' => 'field_ercore_hi_image',
    'type' => 'image',
    'module' => 'image',
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
      'alt' => array(
        'description' => "Alternative image text, for the image's 'alt' attribute.",
        'type' => 'varchar',
        'length' => 512,
        'not null' => FALSE,
      ),
      'title' => array(
        'description' => "Image title text, for the image's 'title' attribute.",
        'type' => 'varchar',
        'length' => 1024,
        'not null' => FALSE,
      ),
      'width' => array(
        'description' => 'The width of the image in pixels.',
        'type' => 'int',
        'unsigned' => TRUE,
      ),
      'height' => array(
        'description' => 'The height of the image in pixels.',
        'type' => 'int',
        'unsigned' => TRUE,
      ),
    ),
    'bundles' => array(
      'node' => array(
        'ercore_j_highlight',
      ),
    ),
  ),
);
