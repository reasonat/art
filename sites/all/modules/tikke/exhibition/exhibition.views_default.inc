<?php
/**
 * @file
 * exhibition.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function exhibition_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'exhibition_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Exhibition gallery';
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
  /* שדה: תוכן: גלריית תערוכה - אזור עליון */
  $handler->display->display_options['fields']['field_exh_gallery_top']['id'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['table'] = 'field_data_field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['field'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['label'] = '';
  $handler->display->display_options['fields']['field_exh_gallery_top']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_top']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exh_gallery_top']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* שדה: תוכן: גלריית תערוכה לאזור התחתון */
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['id'] = 'field_exh_gallery_bottom';
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['table'] = 'field_data_field_exh_gallery_bottom';
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['field'] = 'field_exh_gallery_bottom';
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['label'] = '';
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
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
    'exhibition' => 'exhibition',
  );

  /* Display: Top gallery */
  $handler = $view->new_display('block', 'Top gallery', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: תוכן: גלריית תערוכה - אזור עליון */
  $handler->display->display_options['fields']['field_exh_gallery_top']['id'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['table'] = 'field_data_field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['field'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top']['label'] = '';
  $handler->display->display_options['fields']['field_exh_gallery_top']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_top']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exh_gallery_top']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* שדה: Image title */
  $handler->display->display_options['fields']['field_exh_gallery_top_1']['id'] = 'field_exh_gallery_top_1';
  $handler->display->display_options['fields']['field_exh_gallery_top_1']['table'] = 'field_data_field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top_1']['field'] = 'field_exh_gallery_top';
  $handler->display->display_options['fields']['field_exh_gallery_top_1']['ui_name'] = 'Image title';
  $handler->display->display_options['fields']['field_exh_gallery_top_1']['label'] = '';
  $handler->display->display_options['fields']['field_exh_gallery_top_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exh_gallery_top_1']['alter']['text'] = '[field_exh_gallery_top_1-title]';
  $handler->display->display_options['fields']['field_exh_gallery_top_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_top_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exh_gallery_top_1']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['block_description'] = 'Exhibition - Top gallery';

  /* Display: bottom_gallery */
  $handler = $view->new_display('block', 'bottom_gallery', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* שדה: Image title */
  $handler->display->display_options['fields']['field_exh_gallery_bottom_1']['id'] = 'field_exh_gallery_bottom_1';
  $handler->display->display_options['fields']['field_exh_gallery_bottom_1']['table'] = 'field_data_field_exh_gallery_bottom';
  $handler->display->display_options['fields']['field_exh_gallery_bottom_1']['field'] = 'field_exh_gallery_bottom';
  $handler->display->display_options['fields']['field_exh_gallery_bottom_1']['ui_name'] = 'Image title';
  $handler->display->display_options['fields']['field_exh_gallery_bottom_1']['label'] = '';
  $handler->display->display_options['fields']['field_exh_gallery_bottom_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_exh_gallery_bottom_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_exh_gallery_bottom_1']['alter']['text'] = '[field_exh_gallery_bottom_1-title]';
  $handler->display->display_options['fields']['field_exh_gallery_bottom_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_bottom_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exh_gallery_bottom_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* שדה: תוכן: גלריית תערוכה לאזור התחתון */
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['id'] = 'field_exh_gallery_bottom';
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['table'] = 'field_data_field_exh_gallery_bottom';
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['field'] = 'field_exh_gallery_bottom';
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['label'] = '';
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exh_gallery_bottom']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['block_description'] = 'Exhibition - Botoom gallery';
  $translatables['exhibition_gallery'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('איתחול'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('הכל'),
    t('Top gallery'),
    t('[field_exh_gallery_top_1-title]'),
    t('Exhibition - Top gallery'),
    t('bottom_gallery'),
    t('[field_exh_gallery_bottom_1-title]'),
    t('Exhibition - Botoom gallery'),
  );
  $export['exhibition_gallery'] = $view;

  return $export;
}
