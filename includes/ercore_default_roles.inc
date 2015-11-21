<?php
/**
 * @file
 * Includes array of ERCore default roles.
 */

/**
 * Returns a structured array defining the fields created by this content type.
 *
 * @return array
 *    An associative array specifying ERCore default roles and permissions.
 */

/**
 * Define roles and their weight.
 */

function _ercore_default_roles() {

  $user_role = array();
  $user_role['guest'] = array(
    'name' => 'guest',
    'weight' => '2',
    'permissions' => array(
      'access ercore content',
      'access user profiles',
      'view date repeats',
    ),
  );
  $user_role['student'] = array(
    'name' => 'student',
    'weight' => '4',
    'permissions' => array(
      'access ercore content',
      'access user profiles',
      'view date repeats',
    ),
  );
  $user_role['faculty'] = array(
    'name' => 'faculty',
    'weight' => '6',
    'permissions' => array(
      'access ercore content',
      'access user profiles',
      'access toolbar',
      'entityconnect add button',
      'entityconnect edit button',
      'access overlay',
      'view date repeats',
    ),
  );
  $user_role['administrative staff'] = array(
    'name' => 'administrative staff',
    'weight' => '8',
    'permissions' => array(
      'access ercore admin content',
      'access ercore content',
      'access ercore excel sheets',
      'access user profiles',
      'access toolbar',
      'administer menu',
      'access content overview',
      'entityconnect add button',
      'entityconnect edit button',
      'view date repeats',
      'administer users',
    ),
  );
  $user_role['administrator'] = array(
    'name' => 'administrator',
    'weight' => '10',
    'permissions' => array(
      'administer ercore module',
      'access ercore admin content',
      'access ercore content',
      'access ercore excel sheets',
      'access user profiles',
      'access toolbar',
      'administer menu',
      'access content overview',
      'entityconnect add button',
      'entityconnect edit button',
      'view date repeats',
      'administer users',
    ),
  );
  return $user_role;
}
