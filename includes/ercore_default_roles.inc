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
      'view field_ercore_us_sen_role',
    ),
  );
  $user_role['student'] = array(
    'name' => 'student',
    'weight' => '4',
    'permissions' => array(
      'access ercore content',
      'access user profiles',
      'view date repeats',
      'view field_ercore_us_committees',
      'create field_ercore_us_disabilities',
      'edit own field_ercore_us_disabilities',
      'view own field_ercore_us_disabilities',
      'create field_ercore_us_ethnicity',
      'edit own field_ercore_us_ethnicity',
      'view own field_ercore_us_ethnicity',
      'create field_ercore_us_gender',
      'edit own field_ercore_us_gender',
      'view own field_ercore_us_gender',
      'view field_ercore_us_gender',
      'view field_ercore_us_sen_role',
      'create field_ercore_us_phone_personal',
      'edit own field_ercore_us_phone_personal',
      'view own field_ercore_us_phone_personal',
      'view field_ercore_us_phone_personal',
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
      'create field_ercore_us_committees',
      'edit own field_ercore_us_committees',
      'view own field_ercore_us_committees',
      'view field_ercore_us_committees',
      'create field_ercore_us_disabilities',
      'edit own field_ercore_us_disabilities',
      'view own field_ercore_us_disabilities',
      'create field_ercore_us_ethnicity',
      'edit own field_ercore_us_ethnicity',
      'view own field_ercore_us_ethnicity',
      'create field_ercore_us_gender',
      'edit own field_ercore_us_gender',
      'view own field_ercore_us_gender',
      'view field_ercore_us_gender',
      'view field_ercore_us_sen_role',
      'create field_ercore_us_phone_personal',
      'edit own field_ercore_us_phone_personal',
      'view own field_ercore_us_phone_personal',
      'view field_ercore_us_phone_personal',
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
      'access administration pages',
      'access private fields',
      'entityconnect add button',
      'entityconnect edit button',
      'view date repeats',
      'administer users',
      'access private fields',
      'create field_ercore_us_committees',
      'edit own field_ercore_us_committees',
      'edit field_ercore_us_committees',
      'view own field_ercore_us_committees',
      'view field_ercore_us_committees',
      'create field_ercore_us_disabilities',
      'edit own field_ercore_us_disabilities',
      'edit field_ercore_us_disabilities',
      'view own field_ercore_us_disabilities',
      'view field_ercore_us_disabilities',
      'create field_ercore_us_ethnicity',
      'edit own field_ercore_us_ethnicity',
      'edit field_ercore_us_ethnicity',
      'view own field_ercore_us_ethnicity',
      'view field_ercore_us_ethnicity',
      'create field_ercore_us_gender',
      'edit own field_ercore_us_gender',
      'edit field_ercore_us_gender',
      'view own field_ercore_us_gender',
      'view field_ercore_us_gender',
      'create field_ercore_us_sen_role',
      'edit own field_ercore_us_sen_role',
      'edit field_ercore_us_sen_role',
      'view own field_ercore_us_sen_role',
      'view field_ercore_us_sen_role',
      'create field_ercore_us_phone_personal',
      'edit own field_ercore_us_phone_personal',
      'view own field_ercore_us_phone_personal',
      'edit field_ercore_us_phone_personal',
      'view field_ercore_us_phone_personal',
      'create field_ercore_in_participating',
      'edit own field_ercore_in_participating',
      'view own field_ercore_in_participating',
      'edit field_ercore_in_participating',
      'view field_ercore_in_participating',
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
      'view field_ercore_us_ethnicity',
      'view field_ercore_us_gender',
      'view field_ercore_us_phone_personal',
      'create field_ercore_in_participating',
      'edit own field_ercore_in_participating',
      'view own field_ercore_in_participating',
      'edit field_ercore_in_participating',
      'view field_ercore_in_participating',
    ),
  );
  return $user_role;
}
