<?php
/**
 * @file
 * noticia_tornatore.features.inc
 */

/**
 * Implements hook_node_info().
 */
function noticia_tornatore_node_info() {
  $items = array(
    'noticia_tornatore' => array(
      'name' => t('Noticia_Tornatore'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
