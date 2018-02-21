<?php
/**
 * @file
 * Default theme implementation for a breadcrumb trail.
 *
 * Available variables:
 * - breadcrumb: Breadcrumb trail items.
 *
 * @ingroup themeable
 */
?>
<?php if ($breadcrumb): ?>
  <nav class="row" role="navigation" aria-labelledby="system-breadcrumb">
    <div class="large-12 columns">
      <h2 id="system-breadcrumb" class="element-invisible"><?php print t('Breadcrumb'); ?></h2>
      <ul class="breadcrumbs">
        <?php foreach ($breadcrumb as $item): ?>
          <li><?php print $item; ?></li>
        <?php endforeach; ?>
      </ul>
    </div>
  </nav>
<?php endif; ?>
