<?php
/**
 * @file
 * pro_101_social_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pro_101_social_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_4sqr';
  $strongarm->value = array(
    'name' => 'Foursquare',
    'basepath' => 'www.foursquare.com/venue',
    'inlist' => 0,
    'weight' => '0',
    'href' => '769225',
    'placewidget_code' => 'agtwbGFjZXdpZGdldHIOCxIFVmVudWUY_v__AQw',
    'interval' => '60',
  );
  $export['jasm_4sqr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_custom_01';
  $strongarm->value = array(
    'inlist' => 1,
    'weight' => '3',
    'name' => 'Google+',
    'basepath' => '',
    'href' => 'plus.google.com/u/0/104368908331664089899',
  );
  $export['jasm_custom_01'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_custom_02';
  $strongarm->value = array(
    'inlist' => 1,
    'weight' => '6',
    'name' => 'Linkedin',
    'basepath' => '',
    'href' => 'www.linkedin.com/in/itaine',
  );
  $export['jasm_custom_02'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_custom_03';
  $strongarm->value = array(
    'inlist' => 0,
    'weight' => '6',
    'name' => 'Custom',
    'basepath' => '',
    'href' => 'www.cerebra.co.za',
  );
  $export['jasm_custom_03'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_facebook';
  $strongarm->value = array(
    'name' => 'Facebook',
    'basepath' => 'www.facebook.com',
    'inlist' => 1,
    'weight' => '-3',
    'href' => 'pro101demo',
    'fbid' => '',
    'colorscheme' => 'light',
    'faces' => 1,
    'border_color' => '',
    'stream' => '0',
    'header' => 0,
  );
  $export['jasm_facebook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_feedburner';
  $strongarm->value = array(
    'inlist' => 1,
    'weight' => '9',
    'name' => 'RSS',
    'basepath' => 'feeds.feedburner.com',
    'href' => 'pro101a/feed',
    'override_widget' => '1',
    'custom_block_title' => 'Email Subscription',
  );
  $export['jasm_feedburner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_flattr';
  $strongarm->value = array(
    'inlist' => 0,
    'weight' => '0',
    'name' => 'Flattr',
    'basepath' => 'www.flattr.com/profile',
    'href' => 'CerebraZA',
  );
  $export['jasm_flattr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_flickr';
  $strongarm->value = array(
    'name' => 'Flickr',
    'basepath' => 'www.flickr.com/photos',
    'inlist' => 0,
    'weight' => '0',
    'href' => 'CerebraZA',
  );
  $export['jasm_flickr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_general';
  $strongarm->value = array(
    'blockwidth' => '220',
    'blockheight' => '200',
  );
  $export['jasm_general'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_instagram';
  $strongarm->value = array(
    'name' => 'Instagram',
    'basepath' => 'web.stagram.com/n',
    'inlist' => 0,
    'weight' => '0',
    'href' => 'cerebra',
  );
  $export['jasm_instagram'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_rss';
  $strongarm->value = array(
    'name' => 'RSS',
    'inlist' => 0,
    'weight' => '0',
    'basepath' => '',
    'href' => '',
  );
  $export['jasm_rss'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_twitter';
  $strongarm->value = array(
    'name' => 'Twitter',
    'basepath' => 'www.twitter.com',
    'inlist' => 1,
    'weight' => '0',
    'href' => 'pro101demo',
    'pref_pollresults' => '1',
    'pref_scrollbar' => '0',
    'pref_timed' => 'default',
    'pref_loop' => '1',
    'pref_fluid_width' => 1,
    'pref_tweet_interval' => '6',
    'pref_tweet_number' => '4',
    'pref_avatars' => '1',
    'pref_timestamp' => '1',
    'pref_hashtags' => '1',
    'color_shellback' => '#333333',
    'color_shelltext' => '#ffffff',
    'color_tweetback' => '#000000',
    'color_tweettext' => '#ffffff',
    'color_link' => '#4aed05',
    'but_show_count' => '1',
    'but_color_butcolor' => 'blue',
    'but_color_textcolor' => '',
    'but_color_linkcolor' => '',
    'but_lang' => 'en',
    'but_width' => '250',
    'but_text_align' => 'left',
  );
  $export['jasm_twitter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_twitter_faves';
  $strongarm->value = array(
    'faves_title' => 'Favourites',
    'faves_subject' => 'As chosen by me',
  );
  $export['jasm_twitter_faves'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_twitter_search';
  $strongarm->value = array(
    'search_query' => '"dui law" OR "divorce law" OR "custody law" OR "wills law" OR "criminal law" OR "Real Estate Law" lang:en',
    'search_title' => 'The talk on the net',
    'search_subject' => 'Trending In Law',
  );
  $export['jasm_twitter_search'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jasm_youtube';
  $strongarm->value = array(
    'name' => 'YouTube',
    'basepath' => 'www.youtube.com',
    'inlist' => 0,
    'weight' => '0',
    'href' => 'CerebraZA',
  );
  $export['jasm_youtube'] = $strongarm;

  return $export;
}
