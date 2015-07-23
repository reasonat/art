<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
    <header>
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($display_submitted): ?>
        <p class="submitted">
          <?php print $user_picture; ?>
          <?php print $submitted; ?>
        </p>
      <?php endif; ?>

      <?php if ($unpublished): ?>
        <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
      <?php endif; ?>
    </header>
  <?php endif; ?>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
  ?>
<<<<<<< HEAD
=======
  <?php print render($content['field_copyright']); ?>
>>>>>>> 00d92da6192f9f5667f6b659b0cbf226671556f6

  <?php print render($content['field_campus']); ?>
  <?php print render($content['field_exh_location']); ?>
  <div class="treasurers-designers">
    <?php print render($content['field_treasurers_name']); ?>
    <?php print render($content['field_designers']); ?>
  </div>
  <div class="dates">
<<<<<<< HEAD
    <?php if (render($content['field_exh_open_date'])){?>
      <div class="label"><?php print t("Opening Date");?></div>
      <?php print render($content['field_exh_open_date']); 
    } else if (render($content['field_month_date'])){?>
          <div class="label"><?php print t("Opening Date");?></div>
          <?php print render($content['field_month_date']); 
    } else if (render($content['field_date_year'])){?>
          <div class="label"><?php print t("Opening Date");?></div>
          <?php print render($content['field_date_year']); 
    } 

  if (render($content['field_full_date_2'])){?>
      <div class="label"><?php print t("Closing Date");?></div>
      <?php print render($content['field_full_date_2']); 
  } else if (render($content['field_month_date_2'])){?>
        <div class="label"><?php print t("Closing Date");?></div>
        <?php print render($content['field_month_date_2']); 
    }
    else if (render($content['field_year_date_2'])){?>
        <div class="label"><?php print t("Closing Date");?></div>
        <?php print render($content['field_year_date_2']); 
    }?>
=======
    <div class="open">
    <?php if (render($content['field_exh_open_date'])){?>
      <div class="label"><?php print t("Opening Date:");?></div>
      <?php print render($content['field_exh_open_date']); 
    } else if (render($content['field_month_date'])){?>
          <div class="label"><?php print t("Opening Date:");?></div>
          <?php print render($content['field_month_date']); 
    } else if (render($content['field_date_year'])){?>
          <div class="label"><?php print t("Opening Date:");?></div>
          <?php print render($content['field_date_year']); 
    }?> 
    </div> 
    <div class="close"><?php
  if (render($content['field_full_date_2'])){?>
      <div class="label"><?php print t("Closing Date:");?></div>
      <?php print render($content['field_full_date_2']); 
  } else if (render($content['field_month_date_2'])){?>
        <div class="label"><?php print t("Closing Date:");?></div>
        <?php print render($content['field_month_date_2']); 
    }
    else if (render($content['field_year_date_2'])){?>
        <div class="label"><?php print t("Closing Date:");?></div>
        <?php print render($content['field_year_date_2']); 
    }?>
    </div>
>>>>>>> 00d92da6192f9f5667f6b659b0cbf226671556f6
  </div>

  <?php print render($content['field_text']); ?>

<<<<<<< HEAD
=======
  <?php print render($content['flippy_pager']);?> 

>>>>>>> 00d92da6192f9f5667f6b659b0cbf226671556f6
  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
