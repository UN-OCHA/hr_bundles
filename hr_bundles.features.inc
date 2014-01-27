<?php
/**
 * @file
 * hr_bundles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_bundles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hr_bundles_node_info() {
  $items = array(
    'hr_bundle' => array(
      'name' => t('Cluster/Sector'),
      'base' => 'node_content',
      'description' => t('A cluster/sub-cluster, sector or working group.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
