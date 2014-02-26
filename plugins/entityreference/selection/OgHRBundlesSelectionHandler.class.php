<?php


/**
 * @file
 * OG HR Bundles selection handler.
 */

class OgHRBundlesSelectionHandler extends OgSelectionHandler {

  /**
   * Overrides OgSelectionHandler::getInstance().
   */
  public static function getInstance($field, $instance = NULL, $entity_type = NULL, $entity = NULL) {
    return new OgHRBundlesSelectionHandler($field, $instance, $entity_type, $entity);
  }

  /**
   * Overrides OgSelectionHandler::buildEntityFieldQuery().
   *
   * This is an example of "subgroups" (but without getting into the logic of
   * sub-grouping).
   * The idea here is to show we can set "My groups" and "Other groups" to
   * reference different groups by different
   * logic. In this example, all group nodes below node ID 5, will appear under
   * "My groups", and the rest will appear under "Other groups",
   * for administrators.
   */
  public function buildEntityFieldQuery($match = NULL, $match_operator = 'CONTAINS') {
    $query = parent::buildEntityFieldQuery($match, $match_operator);
    if (!empty($_GET[OG_AUDIENCE_FIELD])) {
      $gid = $_GET[OG_AUDIENCE_FIELD];
      $query->fieldCondition(OG_AUDIENCE_FIELD, 'target_id', $gid, '=');
    }

    return $query;
  }
}
