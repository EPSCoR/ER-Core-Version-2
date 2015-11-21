<?php
/**
 * @file
 * Includes array of ERCore field instances.
 */

/**
 * Returns a structured array defining the instances for this content type.
 *
 * @return array
 *   An associative array specifying the instances to add to our entities.
 */
function _ercore_installed_instances() {
  $t = get_t();

  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_collaboration.inc";
  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_collaborator.inc";
  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_event.inc";
  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_engagement.inc";
  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_highlight.inc";
  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_honor.inc";
  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_institution.inc";
  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_other_product.inc";
  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_patent.inc";
  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_presentation.inc";
  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_proposal.inc";
  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_publication.inc";
  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_component.inc";
  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_program.inc";
  include_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ercore') . "/includes/field-instances/ercore_fi_user.inc";

  $installed_instances = array();
  // Add Collaboration fields.
  $installed_instances = $installed_instances + $ercore_collaboration_instances;

  // Add Collaborator fields.
  $installed_instances = $installed_instances + $ercore_collaborator_instances;

  // Add Event fields.
  $installed_instances = $installed_instances + $ercore_event_instances;

  // Add Engagement fields.
  $installed_instances = $installed_instances + $ercore_engagement_instances;

  // Add Highlight fields.
  $installed_instances = $installed_instances + $ercore_highlight_instances;

  // Add Honor and Award fields.
  $installed_instances = $installed_instances + $ercore_honor_instances;

  // Add Institution fields.
  $installed_instances = $installed_instances + $ercore_institution_instances;

  // Add Other Product fields.
  $installed_instances = $installed_instances + $ercore_other_product_instances;

  // Add Patent fields.
  $installed_instances = $installed_instances + $ercore_patent_instances;

  // Add Presentation fields.
  $installed_instances = $installed_instances + $ercore_presentation_instances;

  // Add Proposal fields.
  $installed_instances = $installed_instances + $ercore_proposal_instances;

  // Add Publication fields.
  $installed_instances = $installed_instances + $ercore_publication_instances;

  // Add Component fields.
  $installed_instances = $installed_instances + $ercore_component_instances;

  // Add Program fields.
  $installed_instances = $installed_instances + $ercore_program_instances;

  // Add User fields.
  $installed_instances = $installed_instances + $ercore_user_instances;

  return $installed_instances;
}
