<?php
/**
 * @file
 * paper_dolls.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function paper_dolls_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'featured_product';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured Product';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Product';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '16';
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Content: Nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['required'] = 1;
  $handler->display->display_options['filters']['nid']['expose']['multiple'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['featured_product'] = array(
    t('Master'),
    t('Featured Product'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Content: Nid'),
    t('Block'),
  );
  $export['featured_product'] = $view;

  $view = new view;
  $view->name = 'product_display_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'product_display_list';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 0;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<div class="tabs">
<ul class="tabs">
<li class="active"><a href="/products">Available</a></li><li><a href="/products/archive">Archived</a></li>
</ul>
</div>
These products are available now.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Fields: Referenced product */
  $handler->display->display_options['relationships']['field_product_reference_product_id']['id'] = 'field_product_reference_product_id';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['table'] = 'field_data_field_product_reference';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['field'] = 'field_product_reference_product_id';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Fields: Weight (field_product_weight) */
  $handler->display->display_options['sorts']['field_product_weight_value']['id'] = 'field_product_weight_value';
  $handler->display->display_options['sorts']['field_product_weight_value']['table'] = 'field_data_field_product_weight';
  $handler->display->display_options['sorts']['field_product_weight_value']['field'] = 'field_product_weight_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Commerce Product: Status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status_1']['expose']['label'] = 'Active';
  $handler->display->display_options['filters']['status_1']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['status_1']['expose']['operator'] = 'status_1_op';
  $handler->display->display_options['filters']['status_1']['expose']['identifier'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['expose']['required'] = 1;
  $handler->display->display_options['filters']['status_1']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'japanese-paper-dolls';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Our Dolls';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Archived Products */
  $handler = $view->new_display('page', 'Archived Products', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Products';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<div class="tabs">
<ul class="tabs">
<li><a href="/products">Available</a></li><li class="active"><a href="/products/archive">Archived</a></li>
</ul>
</div>
These products are no longer available. Please <a href="/contact">contact us</a> if you see one you like. We may be able to get more in stock.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );
  /* Filter criterion: Commerce Product: Status */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['filters']['status_1']['value'] = '0';
  $handler->display->display_options['path'] = 'products/archive';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Archived';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['product_display_list'] = array(
    t('Master'),
    t('Products'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<div class="tabs">
<ul class="tabs">
<li class="active"><a href="/products">Available</a></li><li><a href="/products/archive">Archived</a></li>
</ul>
</div>
These products are available now.'),
    t('Product'),
    t('Active'),
    t('Page'),
    t('Archived Products'),
    t('<div class="tabs">
<ul class="tabs">
<li><a href="/products">Available</a></li><li class="active"><a href="/products/archive">Archived</a></li>
</ul>
</div>
These products are no longer available. Please <a href="/contact">contact us</a> if you see one you like. We may be able to get more in stock.'),
  );
  $export['product_display_list'] = $view;

  $view = new view;
  $view->name = 'product_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'product list';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'product list';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'sku' => 'sku',
    'field_origami_description' => 'field_origami_description',
    'commerce_price' => 'commerce_price',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'sku' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_origami_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'commerce_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Fields: Referenced product */
  $handler->display->display_options['relationships']['field_product_reference_product_id']['id'] = 'field_product_reference_product_id';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['table'] = 'field_data_field_product_reference';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['field'] = 'field_product_reference_product_id';
  $handler->display->display_options['relationships']['field_product_reference_product_id']['required'] = 0;
  /* Field: Commerce Product: SKU */
  $handler->display->display_options['fields']['sku']['id'] = 'sku';
  $handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['sku']['field'] = 'sku';
  $handler->display->display_options['fields']['sku']['relationship'] = 'delta';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Product: Image */
  $handler->display->display_options['fields']['field_origami_image']['id'] = 'field_origami_image';
  $handler->display->display_options['fields']['field_origami_image']['table'] = 'field_data_field_origami_image';
  $handler->display->display_options['fields']['field_origami_image']['field'] = 'field_origami_image';
  $handler->display->display_options['fields']['field_origami_image']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['fields']['field_origami_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_origami_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_origami_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_origami_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_origami_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_origami_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_origami_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_origami_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_origami_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_origami_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_origami_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_origami_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_origami_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_origami_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_origami_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_origami_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_origami_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_origami_image']['field_api_classes'] = 0;
  /* Field: Product: Description */
  $handler->display->display_options['fields']['field_origami_description']['id'] = 'field_origami_description';
  $handler->display->display_options['fields']['field_origami_description']['table'] = 'field_data_field_origami_description';
  $handler->display->display_options['fields']['field_origami_description']['field'] = 'field_origami_description';
  $handler->display->display_options['fields']['field_origami_description']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['fields']['field_origami_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_origami_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_origami_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_origami_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_origami_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_origami_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_origami_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_origami_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_origami_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_origami_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_origami_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_origami_description']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_origami_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_origami_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_origami_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_origami_description']['field_api_classes'] = 0;
  /* Field: Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_product_reference_product_id';
  $handler->display->display_options['fields']['commerce_price']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['external'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['commerce_price']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['commerce_price']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['html'] = 0;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['commerce_price']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['commerce_price']['hide_empty'] = 0;
  $handler->display->display_options['fields']['commerce_price']['empty_zero'] = 0;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_raw_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  $handler->display->display_options['fields']['commerce_price']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product' => 'product',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/product-list';
  $translatables['product_list'] = array(
    t('Master'),
    t('product list'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Product'),
    t('SKU'),
    t('Image'),
    t('Description'),
    t('Price'),
    t('Page'),
  );
  $export['product_list'] = $view;

  return $export;
}
