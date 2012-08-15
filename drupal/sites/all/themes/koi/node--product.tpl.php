<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="node-header clearfix">
    
    <div class="title-and-meta">
      <?php print render($title_prefix); ?>
      <?php print $display_title; ?>
      <?php print render($title_suffix); ?>

        <div class="meta"></div>
    </div> <!-- /.title-and-menta -->

  </div> <!-- /.node-header -->
  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>

    <div class="links-wrapper">
      <?php print render($content['links']); ?>
    </div>
  </div>
  

  <?php print render($content['comments']); ?>

</div>
