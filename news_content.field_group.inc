<?php
/**
 * @file
 * news_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function news_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_attachments|node|news|form';
  $field_group->group_name = 'group_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attachments',
    'weight' => '3',
    'children' => array(
      0 => 'field_file_assets',
      1 => 'field_video_assets',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Attachments',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'large-9 medium-8 small-12 columns left',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_attachments|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_imagery|node|news|form';
  $field_group->group_name = 'group_imagery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Imagery',
    'weight' => '2',
    'children' => array(
      0 => 'field_image_assets',
      1 => 'field_slide_assets',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Imagery',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'large-9 medium-8 small-12 columns left',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_imagery|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta|node|news|form';
  $field_group->group_name = 'group_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meta Tags',
    'weight' => '4',
    'children' => array(
      0 => 'field_meta_description',
      1 => 'field_meta_keywords',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_meta|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_content|node|news|form';
  $field_group->group_name = 'group_news_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'News Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'large-9 medium-8 small-12 columns left',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_news_content|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization|node|news|form';
  $field_group->group_name = 'group_organization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organization',
    'weight' => '1',
    'children' => array(
      0 => 'field_category_terms',
      1 => 'field_featured',
      2 => 'field_news_category_terms',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Organization',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'large-9 medium-8 small-12 columns left',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_organization|node|news|form'] = $field_group;

  return $export;
}
