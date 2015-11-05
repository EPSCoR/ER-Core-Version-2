<?php
/**
 * @file
 * Includes array of ERCore Institution field instances.
 */

$ercore_institution_instances = array(
// INSTANCE: field_ercore_in_abbr
  'field_ercore_in_abbr' => array(
    'label' => 'Abbreviation',
    'widget' => array(
      'weight' => '1',
      'type' => 'text_textfield',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'size' => '60',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '0',
        'settings' => array(),
        'module' => 'text',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '0',
        'settings' => array(),
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '0',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 1,
    'description' => "Please specify an abbreviated name for this institution. This may be the institution's acronym, e.g. University of Hawaii at Hilo could be abbreviated as UHH.",
    'default_value' => NULL,
    'field_name' => 'field_ercore_in_abbr',
    'entity_type' => 'node',
    'bundle' => 'ercore_institution',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_in_category
  'field_ercore_in_category' => array(
    'weight' => '-1',
    'label' => 'Category',
    'widget_type' => 'optionwidgets_buttons',
    'description' => 'Please select one of the categories above that benefits this institution.  Please give preference to one of the top three in the list if the institution qualifies for that category, i.e., Hispanic Serving, Tribal Colleges and Universities, or Historically Black Colleges and Universities.',
    'default_value' => array(
      array(
        'value' => 'none',
      ),
    ),
    'widget' => array(
      'weight' => '4',
      'type' => 'options_buttons',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '-1',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '3',
        'settings' => array(),
        'module' => 'list',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '4',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
      'required_by_role' => array(),
    ),
    'required' => 1,
    'field_name' => 'field_ercore_in_category',
    'entity_type' => 'node',
    'bundle' => 'ercore_institution',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_in_country
  'field_ercore_in_country' => array(
    'label' => 'Country',
    'widget' => array(
      'weight' => '2',
      'type' => 'text_textfield',
      'module' => 'text',
      'active' => 1,
      'settings' => array(
        'size' => '60',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '6',
        'settings' => array(),
        'module' => 'text',
      ),
      'teaser' => array(
        'type' => 'hidden',
        'label' => 'above',
        'settings' => array(),
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'text_default',
        'weight' => '5',
        'settings' => array(),
        'module' => 'text',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_in_country',
    'entity_type' => 'node',
    'bundle' => 'ercore_institution',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_in_link
  'field_ercore_in_link' => array(
    'label' => 'Institution Link',
    'widget' => array(
      'weight' => '6',
      'type' => 'link_field',
      'module' => 'link',
      'active' => 0,
      'settings' => array(),
    ),
    'settings' => array(
      'validate_url' => 0,
      'url' => 0,
      'title' => 'none',
      'title_value' => '',
      'title_maxlength' => '128',
      'display' => array(
        'url_cutoff' => '80',
      ),
      'attributes' => array(
        'target' => '_blank',
        'rel' => '',
        'class' => '',
        'configurable_title' => 0,
        'title' => '',
      ),
      'rel_remove' => 'default',
      'enable_tokens' => 1,
      'user_register_form' => FALSE,
      'title_label_use_field_label' => FALSE,
      'absolute_url' => 1,
    ),
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'type' => 'link_default',
        'weight' => '2',
        'settings' => array(),
        'module' => 'link',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '0',
        'settings' => array(),
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'link_default',
        'weight' => '6',
        'settings' => array(),
        'module' => 'link',
      ),
    ),
    'required' => 0,
    'description' => '',
    'default_value' => NULL,
    'field_name' => 'field_ercore_in_link',
    'entity_type' => 'node',
    'bundle' => 'ercore_institution',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_in_participating
  'field_ercore_in_participating' => array(
    'label' => 'Participating',
    'widget' => array(
      'weight' => '5',
      'type' => 'options_onoff',
      'module' => 'options',
      'active' => 1,
      'settings' => array(
        'display_label' => 0,
      ),
    ),
    'settings' => array(
      'user_register_form' => FALSE,
      'required_by_role' => array(),
    ),
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'type' => 'list_default',
        'weight' => '1',
        'settings' => array(),
        'module' => 'list',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'hidden',
        'weight' => '0',
        'settings' => array(),
      ),
      'full' => array(
        'label' => 'hidden',
        'type' => 'list_default',
        'weight' => '1',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'required' => 0,
    'description' => 'This is a Admin-only field which is used to denote whether this institution is considered a "Participating" Institution, i.e. the institution is part of the EPSCoR grant.',
    'default_value' => array(
      array(
        'value' => 0,
      ),
    ),
    'field_name' => 'field_ercore_in_participating',
    'entity_type' => 'node',
    'bundle' => 'ercore_institution',
    'deleted' => '0',
  ),

// INSTANCE: field_ercore_in_type
  'field_ercore_in_type' => array(
    'weight' => '-2',
    'label' => 'Type',
    'widget_type' => 'optionwidgets_select',
    'description' => 'This labels the university as Jurisdictional, External-Domestic, or External-Foreign.',
    'default_value' => NULL,
    'widget' => array(
      'weight' => '3',
      'type' => 'options_select',
      'module' => 'options',
      'active' => 1,
      'settings' => array(),
    ),
    'display' => array(
      'teaser' => array(
        'label' => 'above',
        'type' => 'list_default',
        'weight' => '-2',
        'settings' => array(),
        'module' => 'list',
      ),
      'full' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '2',
        'settings' => array(),
        'module' => 'list',
      ),
      'default' => array(
        'label' => 'inline',
        'type' => 'list_default',
        'weight' => '3',
        'settings' => array(),
        'module' => 'list',
      ),
    ),
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
      'required_by_role' => array(),
    ),
    'required' => 1,
    'field_name' => 'field_ercore_in_type',
    'entity_type' => 'node',
    'bundle' => 'ercore_institution',
    'deleted' => '0',
  ),
);
