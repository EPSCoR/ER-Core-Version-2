<?php
/**
 * @file
 * Includes array of ERCore field definitions.
 */

/**
 * Returns a structured array defining the fields created by this content type.
 *
 * @return array
 *    An associative array specifying the fields to add to our entities.
 */
function _ercore_installed_fields() {
  $t = get_t();

  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_collaboration.inc";
  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_collaborator.inc";
  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_event.inc";
  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_engagement.inc";
  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_highlight.inc";
  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_honor.inc";
  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_institution.inc";
  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_other_product.inc";
  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_patent.inc";
  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_presentation.inc";
  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_proposal.inc";
  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_publication.inc";
  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_component.inc";
  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_program.inc";
  include_once drupal_get_path('module', 'ercore') . "/includes/field-definitions/ercore_fd_user.inc";

  $installed_fields = array();
  // Add Collaboration fields.
  $installed_fields = $installed_fields + $ercore_collaboration_definitions;

  // Add Collaborator fields.
  $installed_fields = $installed_fields + $ercore_collaborator_definitions;

  // Add Event fields.
  $installed_fields = $installed_fields + $ercore_event_definitions;

  // Add Engagement fields.
  $installed_fields = $installed_fields + $ercore_engagement_definitions;

  // Add Highlight fields.
  $installed_fields = $installed_fields + $ercore_highlight_definitions;

  // Add Honor and Award fields.
  $installed_fields = $installed_fields + $ercore_honor_definitions;

  // Add Institution fields.
  $installed_fields = $installed_fields + $ercore_institution_definitions;

  // Add Other Product fields.
  $installed_fields = $installed_fields + $ercore_other_product_definitions;

  // Add Patent fields.
  $installed_fields = $installed_fields + $ercore_patent_definitions;

  // Add Presentation fields.
  $installed_fields = $installed_fields + $ercore_presentation_definitions;

  // Add Proposal fields.
  $installed_fields = $installed_fields + $ercore_proposal_definitions;

  // Add Publication fields.
  $installed_fields = $installed_fields + $ercore_publication_definitions;

  // Add Component fields.
  $installed_fields = $installed_fields + $ercore_component_definitions;

  // Add Program fields.
  $installed_fields = $installed_fields + $ercore_program_definitions;

  // Add User fields.
  $installed_fields = $installed_fields + $ercore_user_definitions;

  return $installed_fields;
}
