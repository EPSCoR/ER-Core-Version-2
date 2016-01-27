<?php

/**
 * @file
 * Theme related function modifications to feed icon.
 *
 * Views bug: http://drupal.org/node/593336
 */

/**
 * Theme ERCore download link.
 */
function ercore_views_data_export_feed_icon($variables) {
  extract($variables, EXTR_SKIP);
  $url_options = array('html' => TRUE);
  if ($query) {
    $url_options['query'] = $query;
  }
  $link = '<p class="data-link">' . l($text, $url, $url_options) . '</p>';
  return $link;
}
