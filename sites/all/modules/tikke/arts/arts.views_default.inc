<?php
/**
 * @file
 * arts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function arts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'arts_galleries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'arts galleries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'איתחול';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* שדה: תוכן: כותרת */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: תוכן: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: תוכן: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'הכל';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: תוכן: מפורסם */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: תוכן: סוג */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'art' => 'art',
  );

  /* Display: Top gallery */
  $handler = $view->new_display('block', 'Top gallery', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: גלריית היצירה */
  $handler->display->display_options['fields']['field_art_gallery']['id'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['table'] = 'field_data_field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['field'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_art_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_art_gallery']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_art_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery']['delta_offset'] = '0';
  /* שדה: תוכן: גלריית היצירה */
  $handler->display->display_options['fields']['field_art_gallery_1']['id'] = 'field_art_gallery_1';
  $handler->display->display_options['fields']['field_art_gallery_1']['table'] = 'field_data_field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery_1']['field'] = 'field_art_gallery';
  $handler->display->display_options['fields']['field_art_gallery_1']['label'] = '';
  $handler->display->display_options['fields']['field_art_gallery_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_art_gallery_1']['alter']['text'] = '[field_art_gallery_1-alt]
[field_art_gallery_1-title]';
  $handler->display->display_options['fields']['field_art_gallery_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_art_gallery_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_art_gallery_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_art_gallery_1']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'Arts - Top gallery';

  /* Display: bottom_gallery */
  $handler = $view->new_display('block', 'bottom_gallery', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: תמונות - גלריית גריד תחתונה */
  $handler->display->display_options['fields']['field_gallery_grid']['id'] = 'field_gallery_grid';
  $handler->display->display_options['fields']['field_gallery_grid']['table'] = 'field_data_field_gallery_grid';
  $handler->display->display_options['fields']['field_gallery_grid']['field'] = 'field_gallery_grid';
  $handler->display->display_options['fields']['field_gallery_grid']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_grid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_grid']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_grid']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_grid']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_grid']['delta_offset'] = '0';
  /* שדה: תוכן: תמונות - גלריית גריד תחתונה */
  $handler->display->display_options['fields']['field_gallery_grid_1']['id'] = 'field_gallery_grid_1';
  $handler->display->display_options['fields']['field_gallery_grid_1']['table'] = 'field_data_field_gallery_grid';
  $handler->display->display_options['fields']['field_gallery_grid_1']['field'] = 'field_gallery_grid';
  $handler->display->display_options['fields']['field_gallery_grid_1']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_grid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_grid_1']['alter']['text'] = '[field_gallery_grid_1-title]';
  $handler->display->display_options['fields']['field_gallery_grid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_grid_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_grid_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_grid_1']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'Arts - Botoom gallery';
  $translatables['arts_galleries'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('איתחול'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('הכל'),
    t('Top gallery'),
    t('[field_art_gallery_1-alt]
[field_art_gallery_1-title]'),
    t('Arts - Top gallery'),
    t('bottom_gallery'),
    t('[field_gallery_grid_1-title]'),
    t('Arts - Botoom gallery'),
  );
  $export['arts_galleries'] = $view;

  return $export;
}
