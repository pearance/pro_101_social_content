<?php
/**
 * @file
 * pro_101_social_content.box.inc
 */

/**
 * Implements hook_default_box().
 */
function pro_101_social_content_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social_welcome';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Social Welcome';
  $box->options = array(
    'body' => array(
      'value' => '<!-- AddThis Welcome BEGIN -->
<script type="text/javascript" src="//s7.addthis.com/js/250/addthis_widget.js#pubid=ra-4fef75b47c1d7b74"></script>
<script type=\'text/javascript\'>
addthis.bar.initialize({\'default\':{"backgroundColor":"#000000","buttonColor":"#098DF4","textColor":"#FFFFFF","buttonTextColor":"#FFFFFF"},rules:[{"name":"Twitter","match":{"referringService":"twitter"},"message":"If you find this page helpful:","action":{"type":"button","text":"Tweet it!","verb":"share","service":"twitter"}},{"name":"Facebook","match":{"referringService":"facebook"},"message":"Tell your friends about us:","action":{"type":"button","text":"Share on Facebook","verb":"share","service":"facebook"}},{"name":"Google","match":{"referrer":"google.com"},"message":"If you like this page, let Google know:","action":{"type":"button","text":"+1","verb":"share","service":"google_plusone_share"}},{"name":"AnyOther","match":{},"message":"If you enjoy this page, do us a favor:","action":{"type":"button","text":"Click Here","verb":"share","service":"rss"}},{"name":"linkedin","match":{"referringService":"linkedin"},"message":"If you enjoy this page, do us a favor:","action":{"type":"button","text":"Post on LinkedIn","verb":"share","service":"linkedin"}}]});
</script>
<!-- AddThis Welcome END -->',
      'format' => 'plain_text',
    ),
    'additional_classes' => '',
  );
  $export['social_welcome'] = $box;

  return $export;
}
