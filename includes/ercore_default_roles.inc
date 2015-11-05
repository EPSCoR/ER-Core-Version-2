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

function _ercore_default_roles()
{
  $user_role = array();
  $user_role['guest'] = array(
    'name' => 'guest',
    'weight' => '2',
    'permissions' => array(
      'access ercore content',
    ),
  );
  $user_role['student'] = array(
    'name' => 'student',
    'weight' => '4',
    'permissions' => array(
      'access ercore content',
    ),
  );
  $user_role['faculty'] = array(
    'name' => 'faculty',
    'weight' => '6',
    'permissions' => array(
      'access ercore content',
    ),
  );
  $user_role['administrative staff'] = array(
    'name' => 'administrative staff',
    'weight' => '8',
    'permissions' => array(
      'access ercore admin content',
      'access ercore content',
      'access ercore excel sheets',
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
    ),
  );
  return $user_role;
}
