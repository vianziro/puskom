<?php
/**
 * @file
 * views_view.master_biaya.inc
 */

$api = '2.0.0';

$data = $view = new view();
$view->name = 'master_biaya';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Master Biaya';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Master Biaya';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['access']['perm'] = 'administer master_biaya vocabulary terms';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Cari';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Muat Ulang';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'counter' => 'counter',
  'field_kode_biaya' => 'field_kode_biaya',
  'name' => 'name',
  'field_harga_biaya' => 'field_harga_biaya',
  'edit_term' => 'edit_term',
);
$handler->display->display_options['style_options']['default'] = 'field_kode_biaya';
$handler->display->display_options['style_options']['info'] = array(
  'counter' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_kode_biaya' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_harga_biaya' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_term' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Link */
$handler->display->display_options['header']['link']['id'] = 'link';
$handler->display->display_options['header']['link']['table'] = 'views';
$handler->display->display_options['header']['link']['field'] = 'link';
$handler->display->display_options['header']['link']['empty'] = TRUE;
$handler->display->display_options['header']['link']['text'] = 'Tambah data';
$handler->display->display_options['header']['link']['path'] = 'admin/structure/taxonomy/master_biaya/add';
$handler->display->display_options['header']['link']['class'] = 'btn btn-success';
/* Footer: Global: Result summary */
$handler->display->display_options['footer']['result']['id'] = 'result';
$handler->display->display_options['footer']['result']['table'] = 'views';
$handler->display->display_options['footer']['result']['field'] = 'result';
$handler->display->display_options['footer']['result']['content'] = 'Data ke @start sampai @end dari @total.';
/* Field: Global: View result counter */
$handler->display->display_options['fields']['counter']['id'] = 'counter';
$handler->display->display_options['fields']['counter']['table'] = 'views';
$handler->display->display_options['fields']['counter']['field'] = 'counter';
$handler->display->display_options['fields']['counter']['label'] = 'No';
$handler->display->display_options['fields']['counter']['counter_start'] = '1';
$handler->display->display_options['fields']['counter']['reverse'] = 0;
/* Field: Taxonomy term: Kode */
$handler->display->display_options['fields']['field_kode_biaya']['id'] = 'field_kode_biaya';
$handler->display->display_options['fields']['field_kode_biaya']['table'] = 'field_data_field_kode_biaya';
$handler->display->display_options['fields']['field_kode_biaya']['field'] = 'field_kode_biaya';
/* Field: Taxonomy term: Masa */
$handler->display->display_options['fields']['field_masa']['id'] = 'field_masa';
$handler->display->display_options['fields']['field_masa']['table'] = 'field_data_field_masa';
$handler->display->display_options['fields']['field_masa']['field'] = 'field_masa';
/* Field: Taxonomy term: Harga */
$handler->display->display_options['fields']['field_harga_biaya']['id'] = 'field_harga_biaya';
$handler->display->display_options['fields']['field_harga_biaya']['table'] = 'field_data_field_harga_biaya';
$handler->display->display_options['fields']['field_harga_biaya']['field'] = 'field_harga_biaya';
$handler->display->display_options['fields']['field_harga_biaya']['settings'] = array(
  'thousand_separator' => ' ',
  'prefix_suffix' => 1,
);
/* Field: Taxonomy term: Term edit link */
$handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['label'] = '';
$handler->display->display_options['fields']['edit_term']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['edit_term']['text'] = 'ubah';
/* Sort criterion: Taxonomy term: Kode (field_kode_biaya) */
$handler->display->display_options['sorts']['field_kode_biaya_value']['id'] = 'field_kode_biaya_value';
$handler->display->display_options['sorts']['field_kode_biaya_value']['table'] = 'field_data_field_kode_biaya';
$handler->display->display_options['sorts']['field_kode_biaya_value']['field'] = 'field_kode_biaya_value';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'master_biaya' => 'master_biaya',
);
/* Filter criterion: Global: Combine fields filter */
$handler->display->display_options['filters']['combine']['id'] = 'combine';
$handler->display->display_options['filters']['combine']['table'] = 'views';
$handler->display->display_options['filters']['combine']['field'] = 'combine';
$handler->display->display_options['filters']['combine']['operator'] = 'word';
$handler->display->display_options['filters']['combine']['exposed'] = TRUE;
$handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['label'] = 'Pencarian';
$handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
$handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
$handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['combine']['fields'] = array(
  'field_kode_biaya' => 'field_kode_biaya',
  'name' => 'name',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'master-biaya';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'Biaya';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'views',
  1 => 'taxonomy',
  2 => 'text',
  3 => 'number',
);
