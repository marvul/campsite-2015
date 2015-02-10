<?php
/**
 * @file
 * campsite_user_fields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function campsite_account_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function campsite_account_flag_default_flags() {
  $flags = array();
  // Exported flag: "Featured attendees".
  $flags['featured_attendees'] = array(
    'entity_type' => 'user',
    'title' => 'Featured attendees',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Add this user to Featured attendees group',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove this user from Featured attendees group',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => '',
    'api_version' => 3,
    'module' => 'campsite_account',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Individual sponsor".
  $flags['individual_sponsor'] = array(
    'entity_type' => 'user',
    'title' => 'Individual sponsor',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Add this user to Individual sponsor group',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove this user from Individual sponsor group',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => '',
    'api_version' => 3,
    'module' => 'campsite_account',
    'locked' => array(
      0 => 'name',
    ),
  );
  // Exported flag: "Volunteer".
  $flags['volunteer'] = array(
    'entity_type' => 'user',
    'title' => 'Volunteer',
    'global' => 0,
    'types' => array(),
    'flag_short' => 'Add this user to Volunteer group',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove this user from Volunteer group',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'normal',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'show_on_profile' => 1,
    'access_uid' => '',
    'api_version' => 3,
    'module' => 'campsite_account',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}