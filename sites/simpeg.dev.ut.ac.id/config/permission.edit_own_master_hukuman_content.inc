<?php
/**
 * @file
 * permission.edit_own_master_hukuman_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'edit own master_hukuman content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.master_hukuman' => 'content_type.master_hukuman',
);

$optional = array();

$modules = array(
  0 => 'node',
);