<?php
/**
 * @file
 * permission.delete_any_defenisi_skp_content.inc
 */

$api = '2.0.0';

$data = array(
  'permission' => 'delete any defenisi_skp content',
  'roles' => array(),
);

$dependencies = array(
  'content_type.defenisi_skp' => 'content_type.defenisi_skp',
);

$optional = array();

$modules = array(
  0 => 'node',
);