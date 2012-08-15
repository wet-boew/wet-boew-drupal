<?php
/**
 * @file
 * wetkit_users.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function wetkit_users_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'user_login';
  $pm_existing_page->label = 'User Login';
  $pm_existing_page->context = 'entity|user|uid';
  $pm_existing_page->paths = 'user';
  $export['user_login'] = $pm_existing_page;

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'user_password';
  $pm_existing_page->label = 'User Password';
  $pm_existing_page->context = 'entity|user|uid';
  $pm_existing_page->paths = 'user/password';
  $export['user_password'] = $pm_existing_page;

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'user_register';
  $pm_existing_page->label = 'User Register';
  $pm_existing_page->context = 'entity|user|uid';
  $pm_existing_page->paths = 'user/register';
  $export['user_register'] = $pm_existing_page;

  return $export;
}
