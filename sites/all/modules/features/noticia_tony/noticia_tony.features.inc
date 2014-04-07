<?php
/**
 * @file
 * noticia_tony.features.inc
 */

/**
 * Implements hook_node_info().
 */
function noticia_tony_node_info() {
  $items = array(
    'noticia_tony' => array(
      'name' => t('Noticia_Tony'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
