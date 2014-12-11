<?php

/**
 * @file
 * Contains \RestfulEntityNodeBundles.
 */

class RestfulEntityNodeBundles extends \RestfulEntityBaseNode {

  /**
   * Overrides RestfulEntityBaseNode::addExtraInfoToQuery()
   * 
   * Adds proper query tags
   */
  protected function addExtraInfoToQuery($query) {
    parent::addExtraInfoToQuery($query);
    $filters = $this->parseRequestForListFilter();
    if (!empty($filters)) {
      foreach ($query->tags as $i => $tag) {
        if ($tag == 'node_access') {
          unset($query->tags[$i]);
        }
      }
      $query->addTag('entity_field_access');
    }
  }

  /**
   * Overrides \RestfulEntityBase::publicFieldsInfo().
   */
  public function publicFieldsInfo() {
    $public_fields = parent::publicFieldsInfo();

    $public_fields['email'] = array(
      'property' => 'field_email',
    );

    $public_fields['type'] = array(
      'property' => 'field_bundle_type',
    );


    $public_fields['global_cluster'] = array(
      'property' => 'field_sector',
      'resource' => array(
        'hr_sector' => 'global_clusters',
      ),
    );

    $public_fields['lead_agencies'] = array(
      'property' => 'field_organizations',
      'resource' => array(
        'hr_organization' => 'organizations',
      ),
    );

    $public_fields['partners'] = array(
      'property' => 'field_partners',
      'resource' => array(
        'hr_organization' => 'organizations',
      ),
    );

    $public_fields['operation'] = array(
      'property' => 'og_group_ref',
      'resource' => array(
        'hr_operation' => 'operations',
      ),
    );

    return $public_fields;
  }

}
