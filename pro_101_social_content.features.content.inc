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

  $content['rss_count'] = (object) array(
    'exported_path' => 'rss-count',
    'title' => 'RSS Count',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'block',
    'language' => 'und',
    'created' => '1344725650',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'rss_count',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<?php

$username = \'pro101a/feed\';





$api_page = \'https://feedburner.google.com/api/awareness/1.0/GetFeedData?uri=\' . $username;
$xml = file_get_contents ( $api_page );
$profile = new SimpleXmlElement($xml, LIBXML_NOCDATA);
$rsscount = (string) $profile->feed->entry[\'circulation\'];
 

print($rsscount);

?>',
          'summary' => '',
          'format' => 'php_code',
        ),
      ),
    ),
  );

  $content['social_welcome'] = (object) array(
    'exported_path' => 'social-welcome',
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
</script><!-- AddThis Welcome END -->',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

return $content;
}
