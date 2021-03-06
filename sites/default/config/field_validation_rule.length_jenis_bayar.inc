<?php
/**
 * @file
 * field_validation_rule.length_jenis_bayar.inc
 */

$api = '2.0.0';

$data = $rule = new stdClass();
$rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
$rule->api_version = 2;
$rule->rulename = 'length_jenis_bayar';
$rule->name = 'length_jenis_bayar';
$rule->field_name = 'field_text_kode';
$rule->col = 'value';
$rule->entity_type = 'taxonomy_term';
$rule->bundle = 'master_jenis_bayar';
$rule->validator = 'field_validation_length_validator';
$rule->settings = array(
  'min' => '3',
  'max' => '3',
  'bypass' => 0,
  'roles' => array(
    1 => 0,
    2 => 0,
    3 => 0,
  ),
  'errors' => 0,
);
$rule->error_message = 'Kode Jenis Bayar wajib 3 karakter.';


$dependencies = array();

$optional = array();

$modules = array(
  0 => 'ctools',
  1 => 'field_validation',
);
