<?php
/**
 * @file
 * noticia_jose.features.inc
 */

/**
 * Implements hook_node_info().
 */
function noticia_jose_node_info() {
  $items = array(
    'noticia_jose' => array(
      'name' => t('noticia_jose'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('noticia_jose'),
      'help' => '',
    ),
  );
  return $items;
}
