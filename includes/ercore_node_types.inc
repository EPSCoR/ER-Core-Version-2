<?php
/**
 * @file
 * Includes array of ERCore node types.
 */

/**
 * Returns a structured array defining the node types required by this module.
 *
 * @return array
 *   An associative array specifying the node types to add.
 */
function _ercore_node_types() {
  $t = get_t();
  return array(
    // Type ERCore Admin.
    'ercore_admin' => array(
      'type' => 'ercore_admin',
      'name' => $t("ERCore Adminstrative Page"),
      'base' => 'node_content',
      'title_label' => $t("Title"),
      'body_label' => $t("Body"),
      'description' =>
      $t("For ERCore adminstrative content."),
      'custom' => TRUE,
    ),
    // Type ERCore Collaboration.
    'ercore_collaboration' => array(
      'type' => 'ercore_collaboration',
      'name' => $t("ERCore Collaboration"),
      'base' => 'node_content',
      'title_label' => $t("Title"),
      'body_label' => $t("Description of collaboration"),
      'description' =>
      $t("A collaboration is a set of activities leading to a definable
        outcome such as shared use of data, presentation of results,
        publications, patents, outreach, etc."),
      'custom' => TRUE,
    ),
   // Type ERCore Event.
    'ercore_event' => array(
      'type' => 'ercore_event',
      'name' => $t("ERCore Calendar Event"),
      'base' => 'node_content',
      'title_label' => $t("Event Name"),
      'body_label' => $t("Abstract or Short Description"),
      'description' =>
      $t("Enter events onto the Calendar - public or private to EPSCoR only."),
      'custom' => TRUE,
    ),
    // Type ERCore Highlight.
    'ercore_j_highlight' => array(
      'type' => 'ercore_j_highlight',
      'name' => $t("ERCore Highlight"),
      'base' => 'node_content',
      'title_label' => $t("Title"),
      'body_label' => $t("Description"),
      'description' =>
      $t("News item used for a Dynamic display block slideshow."),
      'custom' => TRUE,
    ),
    // Type ERCore Honors & Awards.
    'ercore_j_honor' => array(
      'type' => 'ercore_j_honor',
      'name' => $t("ERCore Honors and Awards"),
      'base' => 'node_content',
      'title_label' => $t("Title"),
      'body_label' => $t("Description"),
      'description' =>
      $t("Honors and awards for special recognition of research or
        achievement."),
      'custom' => TRUE,
    ),
    // Type ERCore Institution.
    'ercore_institution' => array(
      'type' => 'ercore_institution',
      'name' => $t("ERCore Institution"),
      'base' => 'node_content',
      'title_label' => $t("Title"),
      'body_label' => $t("Brief Description of the Institution"),
      'description' =>
      $t("Use this form to add an affiliated institution with the EPSCoR
        project. A person may belong to several institutions, and may
        collaborate from one of many. Enter the institutions that are
        appropriate for the project."),
      'custom' => TRUE,
    ),
    // Type ERCore Other Products.
    'ercore_other_product' => array(
      'type' => 'ercore_other_product',
      'name' => $t("ERCore Other Product"),
      'base' => 'node_content',
      'title_label' => $t("Title"),
      'body_label' => NULL,
      'description' =>
      $t("Use this form to report on other research products such as Data or
        Databases, Physical Collection, Audio or Video products, Software,
        Educational aids, Instruments or Equipment or Other Inventions."),
      'custom' => TRUE,
    ),
    // Type ERCore Patent.
    'ercore_patent' => array(
      'type' => 'ercore_patent',
      'name' => $t("ERCore Patent"),
      'base' => 'node_content',
      'title_label' => $t("Title"),
      'body_label' => NULL,
      'description' =>
      $t("Patents resulting from work done by EPSCoR."),
      'custom' => TRUE,
    ),
    // Type ERCore Presentation.
    'ercore_presentation' => array(
      'type' => 'ercore_presentation',
      'name' => $t("ERCore Presentation"),
      'base' => 'node_content',
      'title_label' => $t("Title"),
      'body_label' => $t("Brief Description of the presentation"),
      'description' =>
      $t("Use this form to report on presentations given by you on EPSCoR
        related research."),
      'custom' => TRUE,
    ),
    // Type ERCore Proposal or Grant.
    'ercore_proposal' => array(
      'type' => 'ercore_proposal',
      'name' => $t("ERCore Proposal or Grant"),
      'base' => 'node_content',
      'title_label' => $t("Title"),
      'body_label' => $t("Brief Description of the proposed work"),
      'description' =>
      $t("Use this form to report on the proposals you have submitted and
        grants either awarded or declined."),
      'custom' => TRUE,
    ),
    // Type ERCore Publication.
    'ercore_publication' => array(
      'type' => 'ercore_publication',
      'name' => $t("ERCore Publication"),
      'base' => 'node_content',
      'title_label' => $t("Title"),
      'body_label' => $t("Abstract"),
      'description' =>
      $t("Publications are journal articles, text books, monographs, chapters
        in books, conference proceedings, technical reports, abstracts, or
        other formal written documents, in both print and electronic media."),
      'custom' => TRUE,
    ),
  // End or node_type array follows.
  );
}
