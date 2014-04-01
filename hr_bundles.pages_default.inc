<?php
/**
 * @file
 * hr_bundles.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function hr_bundles_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hr_bundles';
  $page->task = 'page';
  $page->admin_title = 'Bundles';
  $page->admin_description = '';
  $page->path = 'clusters/countries';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_hr_bundles_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'hr_bundles';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'top' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c31246ce-dda4-4124-8f74-d7f5c5018768';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-067570d0-a210-4094-94fb-64762fb63b74';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'hr_bundles-map';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'hr_highlighted',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '067570d0-a210-4094-94fb-64762fb63b74';
    $display->content['new-067570d0-a210-4094-94fb-64762fb63b74'] = $pane;
    $display->panels['top'][0] = 'new-067570d0-a210-4094-94fb-64762fb63b74';
    $pane = new stdClass();
    $pane->pid = 'new-df1bea6a-8f02-4ad4-b0a0-a0c7f202c0bd';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'hr_bundles-text';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'df1bea6a-8f02-4ad4-b0a0-a0c7f202c0bd';
    $display->content['new-df1bea6a-8f02-4ad4-b0a0-a0c7f202c0bd'] = $pane;
    $display->panels['top'][1] = 'new-df1bea6a-8f02-4ad4-b0a0-a0c7f202c0bd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-067570d0-a210-4094-94fb-64762fb63b74';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hr_bundles'] = $page;

  return $pages;

}
