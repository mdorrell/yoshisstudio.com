<?php 
$node = node_load($nid);
$product_id = $node->field_product_reference['und'][0]['product_id'];
$product = commerce_product_load($product_id);
$product->field_origami_image['und'][0]['style_name'] = 'medium';
$product->field_origami_image['und'][0]['path'] = $product->field_origami_image['und'][0]['uri'];
?>

<div class="inline-product <?php print $div_class;?>">
<a href="<?php print url('node/' . $node->nid);?>">
  <?php print theme('image_style', $product->field_origami_image['und'][0]); ?>
  <h3><?php print $node->title;?></h3>
</a>
</div>
