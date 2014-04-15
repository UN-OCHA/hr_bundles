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
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '89066893-9058-4625-9428-b569701a0246';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-eef056d1-27fc-4637-b3e6-d94dfd3c0fa8';
    $pane->panel = 'contentmain';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eef056d1-27fc-4637-b3e6-d94dfd3c0fa8';
    $display->content['new-eef056d1-27fc-4637-b3e6-d94dfd3c0fa8'] = $pane;
    $display->panels['contentmain'][0] = 'new-eef056d1-27fc-4637-b3e6-d94dfd3c0fa8';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:hr_bundle:default:default'] = $panelizer;

  return $export;
}
