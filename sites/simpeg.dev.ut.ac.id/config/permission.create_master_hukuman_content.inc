<?php
/**
 * @file
 * permission.create_master_hukuman_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'create master_hukuman content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.master_hukuman' => 'content_type.master_hukuman',
);

$optional = array();

$modules = array(
  0 => 'node',
);