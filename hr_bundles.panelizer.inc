<?php
/**
 * @file
 * hr_bundles.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function hr_bundles_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:hr_bundle:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'hr_bundle';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '89066893-9058-4625-9428-b569701a0246';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8b15134a-0653-470d-a363-d52124865236';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'og_group_subscribe',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_name' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8b15134a-0653-470d-a363-d52124865236';
    $display->content['new-8b15134a-0653-470d-a363-d52124865236'] = $pane;
    $display->panels['top'][0] = 'new-8b15134a-0653-470d-a363-d52124865236';
    $pane = new stdClass();
    $pane->pid = 'new-c2bd6937-2ec3-4224-9eb0-bc6db047b64f';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:og_group_ref';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'og_list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c2bd6937-2ec3-4224-9eb0-bc6db047b64f';
    $display->content['new-c2bd6937-2ec3-4224-9eb0-bc6db047b64f'] = $pane;
    $display->panels['top'][1] = 'new-c2bd6937-2ec3-4224-9eb0-bc6db047b64f';
    $pane = new stdClass();
    $pane->pid = 'new-eef056d1-27fc-4637-b3e6-d94dfd3c0fa8';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'eef056d1-27fc-4637-b3e6-d94dfd3c0fa8';
    $display->content['new-eef056d1-27fc-4637-b3e6-d94dfd3c0fa8'] = $pane;
    $display->panels['top'][2] = 'new-eef056d1-27fc-4637-b3e6-d94dfd3c0fa8';
    $pane = new stdClass();
    $pane->pid = 'new-6dfeb015-7365-474a-a189-31a765c200db';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_sector';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6dfeb015-7365-474a-a189-31a765c200db';
    $display->content['new-6dfeb015-7365-474a-a189-31a765c200db'] = $pane;
    $display->panels['top'][3] = 'new-6dfeb015-7365-474a-a189-31a765c200db';
    $pane = new stdClass();
    $pane->pid = 'new-19786c58-d092-4476-b061-0329ce72813b';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bundle_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '19786c58-d092-4476-b061-0329ce72813b';
    $display->content['new-19786c58-d092-4476-b061-0329ce72813b'] = $pane;
    $display->panels['top'][4] = 'new-19786c58-d092-4476-b061-0329ce72813b';
    $pane = new stdClass();
    $pane->pid = 'new-316f4189-5eea-4cb4-bce5-2738963f921d';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:title_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '316f4189-5eea-4cb4-bce5-2738963f921d';
    $display->content['new-316f4189-5eea-4cb4-bce5-2738963f921d'] = $pane;
    $display->panels['top'][5] = 'new-316f4189-5eea-4cb4-bce5-2738963f921d';
    $pane = new stdClass();
    $pane->pid = 'new-c6313dbb-4fab-47ce-912a-b1526b512102';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_parent_cluster';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'c6313dbb-4fab-47ce-912a-b1526b512102';
    $display->content['new-c6313dbb-4fab-47ce-912a-b1526b512102'] = $pane;
    $display->panels['top'][6] = 'new-c6313dbb-4fab-47ce-912a-b1526b512102';
    $pane = new stdClass();
    $pane->pid = 'new-d5d006ea-9a5e-4574-ba74-cddaed1031d3';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'link_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'd5d006ea-9a5e-4574-ba74-cddaed1031d3';
    $display->content['new-d5d006ea-9a5e-4574-ba74-cddaed1031d3'] = $pane;
    $display->panels['top'][7] = 'new-d5d006ea-9a5e-4574-ba74-cddaed1031d3';
    $pane = new stdClass();
    $pane->pid = 'new-0792c4ab-1f45-4349-a31a-36db68d09870';
    $pane->panel = 'top';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '0792c4ab-1f45-4349-a31a-36db68d09870';
    $display->content['new-0792c4ab-1f45-4349-a31a-36db68d09870'] = $pane;
    $display->panels['top'][8] = 'new-0792c4ab-1f45-4349-a31a-36db68d09870';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8b15134a-0653-470d-a363-d52124865236';
  $panelizer->display = $display;
  $export['node:hr_bundle:default:default'] = $panelizer;

  return $export;
}
