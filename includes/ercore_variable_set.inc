<?php
/**
 * @file
 * Includes variables to be set on install.
 */


// ERCore date formats.
variable_set('date_format_ercore_date_format_day_name', 'l');
variable_set('date_format_ercore_date_format_filter', 'Y-m-d');
variable_set('date_format_ercore_date_format_month_day_year', 'F j, Y');
variable_set('date_format_ercore_date_format_month_year', 'F Y');
variable_set('date_format_ercore_date_format_month', 'm');
variable_set('date_format_ercore_date_format_time', 'g:i a');
variable_set('date_format_ercore_date_format_year', 'Y');

// ERCore basic settings variables.
variable_set('ercore_start_date', array(
  'month' => '09',
  'day' => '15',
  'year' => '2015',
));
variable_set('ercore_reporting_month', '09');
variable_set('ercore_summary_types', array(
  'ercore_collaboration' => 'ercore_collaboration',
  'ercore_event' => 'ercore_event',
  'ercore_engagement' => 'ercore_engagement',
  'ercore_highlight' => 'ercore_highlight',
  'ercore_honor' => 'ercore_honor',
  'ercore_institution' => 'ercore_institution',
  'ercore_other_product' => 'ercore_other_product',
  'ercore_participant' => 'ercore_participant',
  'ercore_patent' => 'ercore_patent',
  'ercore_presentation' => 'ercore_presentation',
  'ercore_proposal' => 'ercore_proposal',
  'ercore_publication' => 'ercore_publication',
));
variable_set('ercore_grant_number','');
variable_set('ercore_component_usage','1');
variable_set('ercore_component_required','1');
variable_set('ercore_program_usage','0');
variable_set('ercore_program_required','0');

// Set node type Admin variables.
variable_set('additional_settings__active_tab_ercore_admin', 'edit-display');
variable_set('node_preview_ercore_admin', 1);
variable_set('node_submitted_ercore_admin', 0);
variable_set('node_options_ercore_admin', array(
  0 => 'status',
  1 => 'revision',
));
variable_set('menu_options_ercore_admin', array(
  0 => 'ercore_admin_menu',
));
variable_set('menu_parent_ercore_admin', 'ercore_admin_menu:0');
variable_set('pathauto_node_ercore_admin_pattern',
  '[node:menu-link:parent:url:path]/[node:title]');
variable_set('comment_ercore_event', 0);
variable_set('field_bundle_settings_node__ercore_admin', array(
    'view_modes' =>
      array(
        'full' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser' =>
        array(
          'custom_settings' => FALSE,
        ),
        'teaser_alternate' =>
        array(
          'custom_settings' => FALSE,
        ),
        'rss' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_index' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_result' =>
        array(
          'custom_settings' => FALSE,
        ),
        'diff_standard' =>
        array(
          'custom_settings' => FALSE,
        ),
        'token' =>
        array(
          'custom_settings' => FALSE,
        ),
        'revision' =>
        array(
          'custom_settings' => FALSE,
        ),
      ),
    'extra_fields' =>
      array(
        'form' =>
        array(),
        'display' =>
        array(),
      ),
  )
);
// Set node type Collaboration variables.
variable_set('additional_settings__active_tab_ercore_collaboration', 'edit-display');
variable_set('node_preview_ercore_collaboration', 1);
variable_set('node_submitted_ercore_collaboration', 0);
variable_set('node_options_ercore_collaboration', array(
  0 => 'status',
  1 => 'revision',
));
variable_set('menu_options_ercore_collaboration', array(''));
variable_set('menu_parent_ercore_collaboration', 'main-menu:0');
variable_set('pathauto_node_ercore_collaboration_pattern',
  'collaborations/[node:title]');
variable_set('comment_ercore_collaboration', 0);
variable_set('field_bundle_settings_node__ercore_collaboration', array(
    'view_modes' =>
      array(
        'full' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser_alternate' =>
        array(
          'custom_settings' => FALSE,
        ),
        'rss' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_index' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_result' =>
        array(
          'custom_settings' => FALSE,
        ),
        'diff_standard' =>
        array(
          'custom_settings' => FALSE,
        ),
        'token' =>
        array(
          'custom_settings' => FALSE,
        ),
        'revision' =>
        array(
          'custom_settings' => FALSE,
        ),
      ),
    'extra_fields' =>
      array(
        'form' =>
        array(),
        'display' =>
        array(),
      ),
  )
);
// Set Collaborator variables.
variable_set('field_bundle_settings_field_collection_item__field_ercore_cn_collaborator', array(
    'view_modes' =>
      array(
        'full' =>
        array(
          'custom_settings' => TRUE,
        ),
        'simplified' =>
        array(
          'custom_settings' => TRUE,
        ),
        'token' =>
        array(
          'custom_settings' => FALSE,
        ),
      ),
    'extra_fields' =>
      array(
        'form' =>
        array(),
        'display' =>
        array(),
      ),
  )
);
// Set node type Event variables.
variable_set('additional_settings__active_tab_ercore_event', 'edit-display');
variable_set('node_preview_ercore_event', 1);
variable_set('node_submitted_ercore_event', 0);
variable_set('node_options_ercore_event', array(
  0 => 'status',
  1 => 'revision',
));
variable_set('menu_options_ercore_event', array(''));
variable_set('menu_parent_ercore_event', 'main-menu:0');
variable_set('pathauto_node_ercore_event_pattern',
  'events/[node:field-ercore-ev-date:value:ercore_date_format_year]/[node:field-ercore-ev-date:value:ercore_date_format_month]/[node:title]');

variable_set('comment_ercore_event', 0);
variable_set('field_bundle_settings_node__ercore_event', array(
    'view_modes' =>
      array(
        'full' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser_alternate' =>
        array(
          'custom_settings' => FALSE,
        ),
        'rss' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_index' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_result' =>
        array(
          'custom_settings' => FALSE,
        ),
        'diff_standard' =>
        array(
          'custom_settings' => FALSE,
        ),
        'token' =>
        array(
          'custom_settings' => FALSE,
        ),
        'revision' =>
        array(
          'custom_settings' => FALSE,
        ),
      ),
    'extra_fields' =>
      array(
        'form' =>
        array(),
        'display' =>
        array(),
      ),
  )
);

// Set Engagement variables.
variable_set('field_bundle_settings_field_collection_item__field_ercore_ev_engagement', array(
  'view_modes' =>
    array(
      'full' =>
      array(
        'custom_settings' => TRUE,
      ),
      'simplified' =>
      array(
        'custom_settings' => TRUE,
      ),
      'token' =>
      array(
        'custom_settings' => FALSE,
      ),
    ),
  'extra_fields' =>
    array(
      'form' =>
      array(),
      'display' =>
      array(),
    ),
));

// Set node type Highlight variables.
variable_set('additional_settings__active_tab_ercore_j_highlight', 'edit-display');
variable_set('node_preview_ercore_j_highlight', 1);
variable_set('node_submitted_ercore_j_highlight', 0);
variable_set('node_options_ercore_j_highlight', array(
  0 => 'status',
  1 => 'revision',
));
variable_set('menu_options_ercore_j_highlight', array(''));
variable_set('menu_parent_ercore_j_highlight', 'main-menu:0');
variable_set('pathauto_node_ercore_j_highlight_pattern',
  'hightlights/[node:field-ercore-hi-date:ercore_date_format_year]/[node:field-ercore-hi-date:ercore_date_format_month]/[node:title]');
variable_set('comment_ercore_j_highlight', 0);
variable_set('field_bundle_settings_node__ercore_j_highlight', array(
    'view_modes' =>
      array(
        'full' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser_alternate' =>
        array(
          'custom_settings' => FALSE,
        ),
        'rss' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_index' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_result' =>
        array(
          'custom_settings' => FALSE,
        ),
        'diff_standard' =>
        array(
          'custom_settings' => FALSE,
        ),
        'token' =>
        array(
          'custom_settings' => FALSE,
        ),
        'revision' =>
        array(
          'custom_settings' => FALSE,
        ),
      ),
    'extra_fields' =>
      array(
        'form' =>
        array(),
        'display' =>
        array(),
      ),
  )
);
// Set node type Honors and Awards variables.
variable_set('additional_settings__active_tab_ercore_j_honor', 'edit-display');
variable_set('node_preview_ercore_j_honor', 1);
variable_set('node_submitted_ercore_j_honor', 0);
variable_set('node_options_ercore_j_honor', array(
  0 => 'status',
  1 => 'revision',
));
variable_set('menu_options_ercore_j_honor', array(''));
variable_set('menu_parent_ercore_j_honor', 'main-menu:0');
variable_set('pathauto_node_ercore_j_honor_pattern',
  'honors/[node:field-ercore-hn-date:ercore_date_format_year]/[node:title]');
variable_set('comment_ercore_j_honor', 0);
variable_set('field_bundle_settings_node__ercore_j_honor', array(
    'view_modes' =>
      array(
        'full' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser' =>
        array(
          'custom_settings' => FALSE,
        ),
        'teaser_alternate' =>
        array(
          'custom_settings' => FALSE,
        ),
        'rss' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_index' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_result' =>
        array(
          'custom_settings' => FALSE,
        ),
        'diff_standard' =>
        array(
          'custom_settings' => FALSE,
        ),
        'token' =>
        array(
          'custom_settings' => FALSE,
        ),
        'revision' =>
        array(
          'custom_settings' => FALSE,
        ),
      ),
    'extra_fields' =>
      array(
        'form' =>
        array(),
        'display' =>
        array(),
      ),
  )
);
// Set node type Institutions variables.
variable_set('additional_settings__active_tab_ercore_institution', 'edit-display');
variable_set('node_preview_ercore_institution', 1);
variable_set('node_submitted_ercore_institution', 0);
variable_set('node_options_ercore_institution', array(
  0 => 'status',
  1 => 'revision',
));
variable_set('menu_options_ercore_institution', array(''));
variable_set('menu_parent_ercore_institution', 'main-menu:0');
variable_set('pathauto_node_ercore_institution_pattern',
  'institutions/[node:title]');
variable_set('comment_ercore_institution', 0);
variable_set('field_bundle_settings_node__ercore_institution', array(
    'view_modes' =>
      array(
        'full' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser' =>
        array(
          'custom_settings' => FALSE,
        ),
        'teaser_alternate' =>
        array(
          'custom_settings' => FALSE,
        ),
        'rss' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_index' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_result' =>
        array(
          'custom_settings' => FALSE,
        ),
        'diff_standard' =>
        array(
          'custom_settings' => FALSE,
        ),
        'token' =>
        array(
          'custom_settings' => FALSE,
        ),
        'revision' =>
        array(
          'custom_settings' => FALSE,
        ),
      ),
    'extra_fields' =>
      array(
        'form' =>
        array(),
        'display' =>
        array(),
      ),
  )
);
// Set node type Other Research Products variables.
variable_set('additional_settings__active_tab_ercore_other_product', 'edit-display');
variable_set('node_preview_ercore_other_product', 1);
variable_set('node_submitted_ercore_other_product', 0);
variable_set('node_options_ercore_other_product', array(
  0 => 'status',
  1 => 'revision',
));
variable_set('menu_options_ercore_other_product', array(''));
variable_set('menu_parent_ercore_other_product', 'main-menu:0');
variable_set('pathauto_node_ercore_other_product_pattern',
  'other-research-products/[node:field_ercore_op_type]/[node:title]');
variable_set('comment_ercore_other_product', 0);
variable_set('field_bundle_settings_node__ercore_other_product', array(
    'view_modes' =>
      array(
        'full' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser_alternate' =>
        array(
          'custom_settings' => FALSE,
        ),
        'rss' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_index' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_result' =>
        array(
          'custom_settings' => FALSE,
        ),
        'diff_standard' =>
        array(
          'custom_settings' => FALSE,
        ),
        'token' =>
        array(
          'custom_settings' => FALSE,
        ),
        'revision' =>
        array(
          'custom_settings' => FALSE,
        ),
      ),
    'extra_fields' =>
      array(
        'form' =>
        array(),
        'display' =>
        array(),
      ),
  )
);
// Set node type Patent variables.
variable_set('additional_settings__active_tab_ercore_patent', 'edit-display');
variable_set('node_preview_ercore_patent', 1);
variable_set('node_submitted_ercore_patent', 0);
variable_set('node_options_ercore_patent', array(
  0 => 'status',
  1 => 'revision',
));
variable_set('menu_options_ercore_patent', array(''));
variable_set('menu_parent_ercore_patent', 'main-menu:0');
variable_set('pathauto_node_ercore_patent_pattern', 'patents/[node:title]');
variable_set('comment_ercore_patent', 0);
variable_set('field_bundle_settings_node__ercore_patent', array(
    'view_modes' =>
      array(
        'full' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser_alternate' =>
        array(
          'custom_settings' => FALSE,
        ),
        'rss' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_index' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_result' =>
        array(
          'custom_settings' => FALSE,
        ),
        'diff_standard' =>
        array(
          'custom_settings' => FALSE,
        ),
        'token' =>
        array(
          'custom_settings' => FALSE,
        ),
        'revision' =>
        array(
          'custom_settings' => FALSE,
        ),
      ),
    'extra_fields' =>
      array(
        'form' =>
        array(),
        'display' =>
        array(),
      ),
  )
);
// Set node type Presentation variables.
variable_set('additional_settings__active_tab_ercore_presentation', 'edit-display');
variable_set('node_preview_ercore_presentation', 1);
variable_set('node_submitted_ercore_presentation', 0);
variable_set('node_options_ercore_presentation', array(
  0 => 'status',
  1 => 'revision',
));
variable_set('menu_options_ercore_presentation', array(''));
variable_set('menu_parent_ercore_presentation', 'main-menu:0');
variable_set('pathauto_node_ercore_presentation_pattern',
  'presentations/[node:field_ercore_ps_type]/[node:field-ercore-ps-date:ercore_date_format_year]/[node:title]');
variable_set('comment_ercore_presentation', 0);
variable_set('field_bundle_settings_node__ercore_presentation', array(
    'view_modes' =>
      array(
        'full' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser' =>
        array(
          'custom_settings' => FALSE,
        ),
        'teaser_alternate' =>
        array(
          'custom_settings' => FALSE,
        ),
        'rss' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_index' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_result' =>
        array(
          'custom_settings' => FALSE,
        ),
        'diff_standard' =>
        array(
          'custom_settings' => FALSE,
        ),
        'token' =>
        array(
          'custom_settings' => FALSE,
        ),
        'revision' =>
        array(
          'custom_settings' => FALSE,
        ),
      ),
    'extra_fields' =>
      array(
        'form' =>
        array(),
        'display' =>
        array(),
      ),
  )
);
// Set node type Proposal variables.
variable_set('additional_settings__active_tab_ercore_proposal', 'edit-display');
variable_set('node_preview_ercore_proposal', 1);
variable_set('node_submitted_ercore_proposal', 0);
variable_set('node_options_ercore_proposal', array(
  0 => 'status',
  1 => 'revision',
));
variable_set('menu_options_ercore_proposal', array(''));
variable_set('menu_parent_ercore_proposal', 'main-menu:0');
variable_set('pathauto_node_ercore_proposal_pattern',
  'proposals/[node:field-ercore-pp-proposal-submit:ercore_date_format_year]/[node:field-ercore-pp-proposal-submit:ercore_date_format_month]/[node:title]');
variable_set('comment_ercore_proposal', 0);
variable_set('field_bundle_settings_node__ercore_proposal', array(
    'view_modes' =>
      array(
        'full' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser_alternate' =>
        array(
          'custom_settings' => FALSE,
        ),
        'rss' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_index' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_result' =>
        array(
          'custom_settings' => FALSE,
        ),
        'diff_standard' =>
        array(
          'custom_settings' => FALSE,
        ),
        'token' =>
        array(
          'custom_settings' => FALSE,
        ),
        'revision' =>
        array(
          'custom_settings' => FALSE,
        ),
      ),
    'extra_fields' =>
      array(
        'form' =>
        array(),
        'display' =>
        array(),
      ),
  )
);
// Set node type Publication variables.
variable_set('additional_settings__active_tab_ercore_publication', 'edit-display');
variable_set('node_preview_ercore_publication', 1);
variable_set('node_submitted_ercore_publication', 0);
variable_set('node_options_ercore_publication', array(
  0 => 'status',
  1 => 'revision',
));
variable_set('menu_options_ercore_publication', array(''));
variable_set('menu_parent_ercore_publication', 'main-menu:0');
variable_set('pathauto_node_ercore_publication_pattern',
  'publications/[node:field_ercore_pb_type]/[node:title]');
variable_set('comment_ercore_publication', 0);
variable_set('field_bundle_settings_node__ercore_publication', array(
    'view_modes' =>
      array(
        'full' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser' =>
        array(
          'custom_settings' => TRUE,
        ),
        'teaser_alternate' =>
        array(
          'custom_settings' => FALSE,
        ),
        'rss' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_index' =>
        array(
          'custom_settings' => FALSE,
        ),
        'search_result' =>
        array(
          'custom_settings' => FALSE,
        ),
        'diff_standard' =>
        array(
          'custom_settings' => FALSE,
        ),
        'token' =>
        array(
          'custom_settings' => FALSE,
        ),
        'revision' =>
        array(
          'custom_settings' => FALSE,
        ),
      ),
    'extra_fields' =>
      array(
        'form' =>
        array(),
        'display' =>
        array(),
      ),
  )
);

// Set vocabulary Organizational Component variables.
variable_set('pathauto_taxonomy_term_ercore_component_vvocab_pattern', 'components/[term:name]');
variable_set('field_bundle_settings_taxonomy_term__ercore_component_vocab', array(
  'view_modes' => array(
    'full' => array(
      'custom_settings' => TRUE,
    ),
    'token' => array(
      'custom_settings' => FALSE,
    ),
  ),
  'extra_fields' => array(
    'form' => array(),
    'display' => array(
      'description' => array(
        'default' => array(
          'weight' => '0',
          'visible' => TRUE,
        ),
        'full' => array(
          'weight' => '0',
          'visible' => TRUE,
        ),
      ),
    ),
  ),
));
// Set vocabulary Program variables.
variable_set('pathauto_taxonomy_term_ercore_program_vocab_pattern', 'components/[term:name]');
variable_set('field_bundle_settings_taxonomy_term__ercore_program_vocab', array(
  'view_modes' => array(
    'full' => array(
      'custom_settings' => TRUE,
    ),
    'token' => array(
      'custom_settings' => FALSE,
    ),
  ),
  'extra_fields' => array(
    'form' => array(),
    'display' => array(
      'description' => array(
        'default' => array(
          'weight' => '0',
          'visible' => TRUE,
        ),
        'full' => array(
          'weight' => '0',
          'visible' => TRUE,
        ),
      ),
    ),
  ),
));

// Set User Variables.
variable_set('field_bundle_settings_user__user', array(
  'view_modes' =>
    array(
      'full' =>
      array(
        'custom_settings' => TRUE,
      ),
      'token' =>
      array(
        'custom_settings' => FALSE,
      ),
    ),
  'extra_fields' =>
    array(
      'form' =>
      array(),
      'display' =>
      array(
        'summary' =>
        array(
          'default' =>
          array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'full' =>
          array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'token' =>
          array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
)
);
variable_set('pathauto_user_pattern', 'users/[user:name]');
variable_set('realname_pattern', '[user:name-field-user-name:formatter-full]');
