<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="node-header clearfix">
    
    <h2 class="node-title" <?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>

  </div> <!-- /.node-header -->
  <div class="content"<?php print $content_attributes; ?>>
    <?php print $user_picture; ?>
    <?php
      //$description = truncate_utf8($content['product:field_origami_description'][0]['#markup'], 100, TRUE, TRUE);
      // We hide the price now so that we can render them later. 
      hide($content['product:commerce_price']);
    //  hide($content['product:field_origami_description']);
      print render($content);
     // print $description;
    ?>
  </div>
</div>
