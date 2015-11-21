<?php
/**
 * Created by PhpStorm.
 * User: tschet
 * Date: 11/20/15
 * Time: 4:56 PM
 */
$array = array(
// INSTANCE: field_ercore_organizer.
'field_ercore_organizer' => array(
  'label' => 'EPSCoR Collaborator(s)',
  'widget' => array(
    'weight' => '4',
    'type' => 'entityreference_autocomplete',
    'module' => 'entityreference',
    'active' => 1,
    'settings' => array(
      'match_operator' => 'CONTAINS',
      'size' => '60',
      'path' => '',
    ),
  ),
  'settings' => array(
    'nodeaccess_userreference' => array(
      'referenced' => array(
        'view' => 'view',
        'update' => 'update',
        'delete' => 'delete',
        'deny_view' => 0,
        'deny_update' => 0,
        'deny_delete' => 0,
      ),
      'referenced_published' => '1',
      'create' => array(
        'ercore_collaboration' => 'ercore_collaboration',
        'article' => 0,
        'page' => 0,
        'ercore_admin' => 0,
        'ercore_event' => 0,
        'ercore_j_highlight' => 0,
        'ercore_j_honor' => 0,
        'ercore_institution' => 0,
        'ercore_other_product' => 0,
        'ercore_patent' => 0,
        'ercore_presentation' => 0,
        'ercore_proposal' => 0,
        'ercore_publication' => 0,
      ),
      'author' => array(
        'view' => 'view',
        'update' => 'update',
        'delete' => 'delete',
      ),
      'author_published' => '1',
      'all' => array(
        'view' => 'view',
      ),
      'all_published' => '0',
      'unused' => '0',
      'views' => array(
        'view' => '',
        'view_args' => '',
      ),
      'priority' => '0',
    ),
    'user_register_form' => FALSE,
  ),
  'display' => array(
    'default' => array(
      'label' => 'above',
      'type' => 'entityreference_label',
      'weight' => '1',
      'settings' => array(
        'link' => 1,
      ),
      'module' => 'entityreference',
    ),
    'teaser' => array(
      'label' => 'above',
      'type' => 'entityreference_label',
      'weight' => '1',
      'settings' => array(
        'link' => 1,
      ),
      'module' => 'entityreference',
    ),
    'full' => array(
      'label' => 'above',
      'type' => 'entityreference_label',
      'weight' => '1',
      'settings' => array(
        'link' => 1,
      ),
      'module' => 'entityreference',
    ),
  ),
  'required' => 1,
  'description' => '',
  'default_value' => NULL,
  'default_value_function' => '',
  'field_name' => 'field_ercore_organizer',
  'entity_type' => 'node',
  'bundle' => 'ercore_collaboration',
  'deleted' => '0',
),

// INSTANCE: field_ercore_components.
  'field_ercore_components' => array(
  'label' => 'Components',
  'widget' => array(
    'weight' => '6',
    'type' => 'options_select',
    'module' => 'options',
    'active' => 1,
    'settings' => array(),
  ),
  'settings' => array(
    'behaviors' => array(
      'taxonomy-index' => array(
        'status' => TRUE,
      ),
      'prepopulate' => array(
        'status' => 0,
      ),
    ),
    'user_register_form' => FALSE,
  ),
  'display' => array(
    'default' => array(
      'label' => 'inline',
      'type' => 'entityreference_label',
      'weight' => '3',
      'settings' => array(
        'link' => FALSE,
      ),
      'module' => 'entityreference',
    ),
    'teaser' => array(
      'label' => 'above',
      'type' => 'hidden',
      'weight' => '3',
      'settings' => array(),
    ),
    'full' => array(
      'label' => 'inline',
      'type' => 'entityreference_label',
      'weight' => '3',
      'settings' => array(
        'link' => FALSE,
      ),
      'module' => 'entityreference',
    ),
  ),
  'required' => 0,
  'description' => '',
  'default_value' => NULL,
  'default_value_function' => '',
  'field_name' => 'field_ercore_components',
  'entity_type' => 'node',
  'bundle' => 'ercore_collaboration',
  'deleted' => '0',
),
);