<?php
/**
 * @file
 * permission.administer_master_agama_vocabulary_terms.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'administer master_agama vocabulary terms',
  'roles' => array(
    0 => 'authenticated user',
  ),
);

$dependencies = array();

$optional = array();

$modules = array(
  0 => 'vppr',
);
