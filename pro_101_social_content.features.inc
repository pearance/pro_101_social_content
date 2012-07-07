<?php
/**
 * @file
 * pro_101_social_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pro_101_social_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
