<?php
/**
 * @file
 * feeds_importer.master_strata.inc
 */

$api = '2.0.0';

$data = $feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'master_strata';
$feeds_importer->config = array(
  'name' => 'Master Strata',
  'description' => 'To bulk import master strata datas into the system.',
  'fetcher' => array(
    'plugin_key' => 'FeedsFileFetcher',
    'config' => array(
      'allowed_extensions' => 'txt csv tsv xml opml',
      'direct' => FALSE,
      'directory' => 'public://feeds',
      'allowed_schemes' => array(
        0 => 'public',
      ),
    ),
  ),
  'parser' => array(
    'plugin_key' => 'FeedsCSVParser',
    'config' => array(
      'delimiter' => ',',
      'no_headers' => 0,
    ),
  ),
  'processor' => array(
    'plugin_key' => 'FeedsTermProcessor',
    'config' => array(
      'vocabulary' => 0,
      'mappings' => array(
        0 => array(
          'source' => 'Kode Strata',
          'target' => 'field_text_kode',
          'unique' => FALSE,
        ),
        1 => array(
          'source' => 'Nama Strata',
          'target' => 'name',
          'unique' => FALSE,
        ),
      ),
      'update_existing' => '2',
      'input_format' => 'plain_text',
      'skip_hash_check' => 0,
      'bundle' => 'master_strata',
    ),
  ),
  'content_type' => '',
  'update' => 0,
  'import_period' => '-1',
  'expire_period' => 3600,
  'import_on_create' => 1,
  'process_in_background' => 0,
);


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'feeds',
);
