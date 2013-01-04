<?php
/**
 * @file
 * pro_101_social_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function pro_101_social_content_content_defaults() {
  $content = array();

  $content['social_welcome'] = (object) array(
    'exported_path' => 'block/social-welcome',
    'title' => 'Social Welcome',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'block',
    'language' => 'und',
    'created' => '1342262674',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'social_welcome',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<!-- AddThis Welcome BEGIN --><script type="text/javascript" src="//s7.addthis.com/js/250/addthis_widget.js#pubid=ra-4fef75b47c1d7b74"></script><script type=\'text/javascript\'>
addthis.bar.initialize({\'default\':{"backgroundColor":"#000000","buttonColor":"#098DF4","textColor":"#FFFFFF","buttonTextColor":"#FFFFFF","hideAfter":20},rules:[{"name":"AnyOther","message":"If you enjoy this page, do us a favor:","action":{"type":"button","text":"Click Here","verb":"share","service":"preferred"}}]});
</script><!-- AddThis Welcome END -->
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

return $content;
}
