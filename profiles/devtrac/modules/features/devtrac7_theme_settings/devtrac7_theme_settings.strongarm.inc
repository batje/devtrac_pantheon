<?php
/**
 * @file
 * devtrac7_theme_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_theme_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_devtrac_classic_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'alpha_grid' => 'alpha_fluid',
    'alpha_responsive' => 1,
    'alpha_viewport' => 1,
    'alpha_viewport_initial_scale' => '1',
    'alpha_viewport_min_scale' => '1',
    'alpha_viewport_max_scale' => '1',
    'alpha_viewport_user_scaleable' => 0,
    'alpha_primary_alpha_default' => 'normal',
    'alpha_layouts_alpha_default_narrow_responsive' => 1,
    'alpha_layouts_alpha_default_narrow_weight' => '1',
    'alpha_layouts_alpha_default_narrow_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_layouts_alpha_default_normal_responsive' => 1,
    'alpha_layouts_alpha_default_normal_weight' => '2',
    'alpha_layouts_alpha_default_normal_media' => 'all and (min-width: 980px) and (min-device-width: 980px), all and (max-device-width: 1024px) and (min-width: 1024px) and (orientation:landscape)',
    'alpha_layouts_alpha_default_wide_responsive' => 1,
    'alpha_layouts_alpha_default_wide_weight' => '3',
    'alpha_layouts_alpha_default_wide_media' => 'all and (min-width: 1220px)',
    'alpha_layouts_alpha_default_fluid_responsive' => 0,
    'alpha_layouts_alpha_default_fluid_weight' => '0',
    'alpha_layouts_alpha_default_fluid_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_primary_alpha_fluid' => 'normal',
    'alpha_layouts_alpha_fluid_normal_responsive' => 0,
    'alpha_layouts_alpha_fluid_normal_weight' => '0',
    'alpha_layouts_alpha_fluid_normal_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_libraries' => array(
      'omega_formalize' => 'omega_formalize',
      'omega_mediaqueries' => 'omega_mediaqueries',
      'omega_equalheights' => 0,
    ),
    'alpha_css' => array(
      'alpha-reset.css' => 'alpha-reset.css',
      'alpha-mobile.css' => 'alpha-mobile.css',
      'alpha-alpha.css' => 'alpha-alpha.css',
      'omega-text.css' => 'omega-text.css',
      'omega-branding.css' => 'omega-branding.css',
      'omega-menu.css' => 'omega-menu.css',
      'omega-forms.css' => 'omega-forms.css',
      'omega-visuals.css' => 'omega-visuals.css',
      'global.css' => 'global.css',
    ),
    'alpha_exclude' => array(
      'profiles/devtrac/modules/contrib/adaptive_image/css/adaptive-image.css' => 0,
      'profiles/devtrac/modules/contrib/collapsiblock/collapsiblock.css' => 0,
      'modules/comment/comment.css' => 0,
      'profiles/devtrac/modules/contrib/date/date_api/date.css' => 0,
      'profiles/devtrac/modules/contrib/date/date_popup/themes/datepicker.1.7.css' => 0,
      'profiles/devtrac/modules/custom/devtrac7_progress_field/css/devtracd7_progress_field.css' => 0,
      'modules/field/theme/field.css' => 0,
      'modules/node/node.css' => 0,
      'profiles/devtrac/modules/contrib/relation_add/relation_add.css' => 0,
      'modules/user/user.css' => 0,
      'profiles/devtrac/modules/contrib/views/css/views.css' => 0,
      'profiles/devtrac/themes/devtrac7_theme/css/global.css' => 0,
      'profiles/devtrac/themes/devtrac7_theme/css/tagcloud.css' => 0,
      'profiles/devtrac/themes/devtrac7_theme/css/jquery.mCustomScrollbar.css' => 0,
      'profiles/devtrac/themes/devtrac7_theme/css/styles.css' => 0,
      'profiles/devtrac/themes/devtrac7_theme/css/styles-legend.css' => 0,
      'profiles/devtrac/themes/devtrac7_theme/css/print.css' => 0,
      'profiles/devtrac/themes/devtrac7_theme/css/print-page.css' => 0,
      'profiles/devtrac/themes/devtrac_classic/css/newstyles.css' => 0,
      'misc/vertical-tabs.css' => 0,
      'modules/aggregator/aggregator.css' => 0,
      'modules/block/block.css' => 0,
      'modules/dblog/dblog.css' => 0,
      'modules/file/file.css' => 0,
      'modules/filter/filter.css' => 0,
      'modules/help/help.css' => 0,
      'modules/menu/menu.css' => 0,
      'modules/openid/openid.css' => 0,
      'modules/profile/profile.css' => 0,
      'modules/statistics/statistics.css' => 0,
      'modules/syslog/syslog.css' => 0,
      'modules/system/admin.css' => 0,
      'modules/system/maintenance.css' => 0,
      'modules/system/system.css' => 0,
      'modules/system/system.admin.css' => 0,
      'modules/system/system.base.css' => 0,
      'modules/system/system.maintenance.css' => 0,
      'modules/system/system.menus.css' => 0,
      'modules/system/system.messages.css' => 0,
      'modules/system/system.theme.css' => 0,
      'modules/taxonomy/taxonomy.css' => 0,
      'modules/tracker/tracker.css' => 0,
      'modules/update/update.css' => 0,
    ),
    'alpha_debug_block_toggle' => 0,
    'alpha_debug_block_active' => 0,
    'alpha_debug_grid_toggle' => 0,
    'alpha_debug_grid_active' => 0,
    'alpha_debug_grid_roles' => array(
      1 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      6 => 0,
      2 => 0,
      7 => 0,
    ),
    'alpha_toggle_messages' => 1,
    'alpha_toggle_action_links' => 1,
    'alpha_toggle_tabs' => 1,
    'alpha_toggle_breadcrumb' => 1,
    'alpha_toggle_page_title' => 1,
    'alpha_toggle_feed_icons' => 0,
    'alpha_hidden_title' => 1,
    'alpha_hidden_site_name' => 0,
    'alpha_hidden_site_slogan' => 0,
    'alpha_region_olblockpanel_force' => 0,
    'alpha_region_olblockpanel_zone' => NULL,
    'alpha_region_olblockpanel_prefix' => '0',
    'alpha_region_olblockpanel_columns' => '1',
    'alpha_region_olblockpanel_suffix' => '0',
    'alpha_region_olblockpanel_weight' => '0',
    'alpha_region_olblockpanel_position' => '0',
    'alpha_region_olblockpanel_css' => '',
    'alpha_region_olblockpanel_equal_height_element' => FALSE,
    'alpha_region_olblockpanel_equal_height_container' => 0,
    'alpha_region_help_force' => 0,
    'alpha_region_help_zone' => NULL,
    'alpha_region_help_prefix' => '0',
    'alpha_region_help_columns' => '1',
    'alpha_region_help_suffix' => '0',
    'alpha_region_help_weight' => '0',
    'alpha_region_help_position' => '0',
    'alpha_region_help_css' => '',
    'alpha_region_help_equal_height_element' => FALSE,
    'alpha_region_help_equal_height_container' => 0,
    'alpha_region_olmaptext_1_force' => 0,
    'alpha_region_olmaptext_1_zone' => NULL,
    'alpha_region_olmaptext_1_prefix' => '0',
    'alpha_region_olmaptext_1_columns' => '1',
    'alpha_region_olmaptext_1_suffix' => '0',
    'alpha_region_olmaptext_1_weight' => '0',
    'alpha_region_olmaptext_1_position' => '0',
    'alpha_region_olmaptext_1_css' => '',
    'alpha_region_olmaptext_1_equal_height_element' => FALSE,
    'alpha_region_olmaptext_1_equal_height_container' => 0,
    'alpha_region_breadcrumb_force' => 0,
    'alpha_region_breadcrumb_zone' => NULL,
    'alpha_region_breadcrumb_prefix' => '0',
    'alpha_region_breadcrumb_columns' => '1',
    'alpha_region_breadcrumb_suffix' => '0',
    'alpha_region_breadcrumb_weight' => '0',
    'alpha_region_breadcrumb_position' => '0',
    'alpha_region_breadcrumb_css' => '',
    'alpha_region_breadcrumb_equal_height_element' => FALSE,
    'alpha_region_breadcrumb_equal_height_container' => 0,
    'alpha_region_olmaptext_rightuppercorner_force' => 0,
    'alpha_region_olmaptext_rightuppercorner_zone' => NULL,
    'alpha_region_olmaptext_rightuppercorner_prefix' => '0',
    'alpha_region_olmaptext_rightuppercorner_columns' => '1',
    'alpha_region_olmaptext_rightuppercorner_suffix' => '0',
    'alpha_region_olmaptext_rightuppercorner_weight' => '0',
    'alpha_region_olmaptext_rightuppercorner_position' => '0',
    'alpha_region_olmaptext_rightuppercorner_css' => '',
    'alpha_region_olmaptext_rightuppercorner_equal_height_element' => FALSE,
    'alpha_region_olmaptext_rightuppercorner_equal_height_container' => 0,
    'alpha_region_header_first_force' => 0,
    'alpha_region_header_first_zone' => NULL,
    'alpha_region_header_first_prefix' => '0',
    'alpha_region_header_first_columns' => '6',
    'alpha_region_header_first_suffix' => '0',
    'alpha_region_header_first_weight' => '1',
    'alpha_region_header_first_position' => '0',
    'alpha_region_header_first_css' => '',
    'alpha_region_header_first_equal_height_element' => FALSE,
    'alpha_region_header_first_equal_height_container' => 0,
    'alpha_region_my_items_menu_force' => 0,
    'alpha_region_my_items_menu_zone' => NULL,
    'alpha_region_my_items_menu_prefix' => '0',
    'alpha_region_my_items_menu_columns' => '8',
    'alpha_region_my_items_menu_suffix' => '0',
    'alpha_region_my_items_menu_weight' => '1',
    'alpha_region_my_items_menu_position' => '0',
    'alpha_region_my_items_menu_css' => 'header-menus',
    'alpha_region_my_items_menu_equal_height_element' => FALSE,
    'alpha_region_my_items_menu_equal_height_container' => 0,
    'alpha_region_my_tool_menu_force' => 0,
    'alpha_region_my_tool_menu_zone' => NULL,
    'alpha_region_my_tool_menu_prefix' => '0',
    'alpha_region_my_tool_menu_columns' => '4',
    'alpha_region_my_tool_menu_suffix' => '0',
    'alpha_region_my_tool_menu_weight' => '2',
    'alpha_region_my_tool_menu_position' => '0',
    'alpha_region_my_tool_menu_css' => 'header-menus',
    'alpha_region_my_tool_menu_equal_height_element' => FALSE,
    'alpha_region_my_tool_menu_equal_height_container' => 0,
    'alpha_region_header_second_force' => 0,
    'alpha_region_header_second_zone' => NULL,
    'alpha_region_header_second_prefix' => '0',
    'alpha_region_header_second_columns' => '6',
    'alpha_region_header_second_suffix' => '0',
    'alpha_region_header_second_weight' => '2',
    'alpha_region_header_second_position' => '0',
    'alpha_region_header_second_css' => '',
    'alpha_region_header_second_equal_height_element' => FALSE,
    'alpha_region_header_second_equal_height_container' => 0,
    'alpha_region_filter_force' => 0,
    'alpha_region_filter_zone' => NULL,
    'alpha_region_filter_prefix' => '0',
    'alpha_region_filter_columns' => '8',
    'alpha_region_filter_suffix' => '0',
    'alpha_region_filter_weight' => '3',
    'alpha_region_filter_position' => '0',
    'alpha_region_filter_css' => '',
    'alpha_region_filter_equal_height_element' => FALSE,
    'alpha_region_filter_equal_height_container' => 0,
    'alpha_region_categories_force' => 0,
    'alpha_region_categories_zone' => NULL,
    'alpha_region_categories_prefix' => '0',
    'alpha_region_categories_columns' => '12',
    'alpha_region_categories_suffix' => '0',
    'alpha_region_categories_weight' => '5',
    'alpha_region_categories_position' => '0',
    'alpha_region_categories_css' => '',
    'alpha_region_categories_equal_height_element' => FALSE,
    'alpha_region_categories_equal_height_container' => 0,
    'alpha_zone_categories_wrapper' => 0,
    'alpha_zone_categories_force' => 0,
    'alpha_zone_categories_order' => 0,
    'alpha_zone_categories_section' => NULL,
    'alpha_zone_categories_weight' => '0',
    'alpha_zone_categories_columns' => '12',
    'alpha_zone_categories_primary' => NULL,
    'alpha_zone_categories_css' => '',
    'alpha_zone_categories_wrapper_css' => '',
    'alpha_zone_categories_equal_height_container' => 0,
    'alpha_zone_filter_and_switcher_wrapper' => 0,
    'alpha_zone_filter_and_switcher_force' => 0,
    'alpha_zone_filter_and_switcher_order' => 0,
    'alpha_zone_filter_and_switcher_section' => NULL,
    'alpha_zone_filter_and_switcher_weight' => '0',
    'alpha_zone_filter_and_switcher_columns' => '12',
    'alpha_zone_filter_and_switcher_primary' => NULL,
    'alpha_zone_filter_and_switcher_css' => '',
    'alpha_zone_filter_and_switcher_wrapper_css' => '',
    'alpha_zone_filter_and_switcher_equal_height_container' => 0,
    'alpha_zone_breadcrumbs_wrapper' => 0,
    'alpha_zone_breadcrumbs_force' => 0,
    'alpha_zone_breadcrumbs_order' => 0,
    'alpha_zone_breadcrumbs_section' => NULL,
    'alpha_zone_breadcrumbs_weight' => '0',
    'alpha_zone_breadcrumbs_columns' => '12',
    'alpha_zone_breadcrumbs_primary' => NULL,
    'alpha_zone_breadcrumbs_css' => '',
    'alpha_zone_breadcrumbs_wrapper_css' => '',
    'alpha_zone_breadcrumbs_equal_height_container' => 0,
    'alpha_zone_preface_wrapper' => 1,
    'alpha_zone_preface_force' => 0,
    'alpha_zone_preface_order' => 0,
    'alpha_zone_preface_section' => NULL,
    'alpha_zone_preface_weight' => '1',
    'alpha_zone_preface_columns' => '12',
    'alpha_zone_preface_primary' => NULL,
    'alpha_zone_preface_css' => '',
    'alpha_zone_preface_wrapper_css' => '',
    'alpha_zone_preface_equal_height_container' => 0,
    'alpha_region_preface_first_force' => 0,
    'alpha_region_preface_first_zone' => 'preface',
    'alpha_region_preface_first_prefix' => '0',
    'alpha_region_preface_first_columns' => '4',
    'alpha_region_preface_first_suffix' => '0',
    'alpha_region_preface_first_weight' => '1',
    'alpha_region_preface_first_position' => '0',
    'alpha_region_preface_first_css' => '',
    'alpha_region_preface_first_equal_height_element' => 0,
    'alpha_region_preface_first_equal_height_container' => 0,
    'alpha_region_preface_second_force' => 0,
    'alpha_region_preface_second_zone' => 'preface',
    'alpha_region_preface_second_prefix' => '0',
    'alpha_region_preface_second_columns' => '4',
    'alpha_region_preface_second_suffix' => '0',
    'alpha_region_preface_second_weight' => '2',
    'alpha_region_preface_second_position' => '0',
    'alpha_region_preface_second_css' => '',
    'alpha_region_preface_second_equal_height_element' => 0,
    'alpha_region_preface_second_equal_height_container' => 0,
    'alpha_region_preface_third_force' => 0,
    'alpha_region_preface_third_zone' => 'preface',
    'alpha_region_preface_third_prefix' => '0',
    'alpha_region_preface_third_columns' => '4',
    'alpha_region_preface_third_suffix' => '0',
    'alpha_region_preface_third_weight' => '3',
    'alpha_region_preface_third_position' => '0',
    'alpha_region_preface_third_css' => '',
    'alpha_region_preface_third_equal_height_element' => 0,
    'alpha_region_preface_third_equal_height_container' => 0,
    'alpha_zone_user_wrapper' => 1,
    'alpha_zone_user_force' => 0,
    'alpha_zone_user_order' => 0,
    'alpha_zone_user_section' => NULL,
    'alpha_zone_user_weight' => '1',
    'alpha_zone_user_columns' => '12',
    'alpha_zone_user_primary' => NULL,
    'alpha_zone_user_css' => '',
    'alpha_zone_user_wrapper_css' => '',
    'alpha_zone_user_equal_height_container' => 0,
    'alpha_region_user_first_force' => 0,
    'alpha_region_user_first_zone' => 'user',
    'alpha_region_user_first_prefix' => '0',
    'alpha_region_user_first_columns' => '8',
    'alpha_region_user_first_suffix' => '0',
    'alpha_region_user_first_weight' => '1',
    'alpha_region_user_first_position' => '0',
    'alpha_region_user_first_css' => '',
    'alpha_region_user_first_equal_height_element' => 0,
    'alpha_region_user_first_equal_height_container' => 0,
    'alpha_region_user_second_force' => 0,
    'alpha_region_user_second_zone' => 'user',
    'alpha_region_user_second_prefix' => '0',
    'alpha_region_user_second_columns' => '4',
    'alpha_region_user_second_suffix' => '0',
    'alpha_region_user_second_weight' => '2',
    'alpha_region_user_second_position' => '0',
    'alpha_region_user_second_css' => '',
    'alpha_region_user_second_equal_height_element' => 0,
    'alpha_region_user_second_equal_height_container' => 0,
    'alpha_zone_postscript_wrapper' => 1,
    'alpha_zone_postscript_force' => 0,
    'alpha_zone_postscript_order' => 0,
    'alpha_zone_postscript_section' => NULL,
    'alpha_zone_postscript_weight' => '3',
    'alpha_zone_postscript_columns' => '12',
    'alpha_zone_postscript_primary' => NULL,
    'alpha_zone_postscript_css' => '',
    'alpha_zone_postscript_wrapper_css' => '',
    'alpha_zone_postscript_equal_height_container' => 0,
    'alpha_region_postscript_third_force' => 0,
    'alpha_region_postscript_third_zone' => 'postscript',
    'alpha_region_postscript_third_prefix' => '0',
    'alpha_region_postscript_third_columns' => '3',
    'alpha_region_postscript_third_suffix' => '0',
    'alpha_region_postscript_third_weight' => '3',
    'alpha_region_postscript_third_position' => '0',
    'alpha_region_postscript_third_css' => '',
    'alpha_region_postscript_third_equal_height_element' => 0,
    'alpha_region_postscript_third_equal_height_container' => 0,
    'alpha_region_postscript_fourth_force' => 0,
    'alpha_region_postscript_fourth_zone' => 'postscript',
    'alpha_region_postscript_fourth_prefix' => '0',
    'alpha_region_postscript_fourth_columns' => '3',
    'alpha_region_postscript_fourth_suffix' => '0',
    'alpha_region_postscript_fourth_weight' => '4',
    'alpha_region_postscript_fourth_position' => '0',
    'alpha_region_postscript_fourth_css' => '',
    'alpha_region_postscript_fourth_equal_height_element' => 0,
    'alpha_region_postscript_fourth_equal_height_container' => 0,
    'alpha_zone_branding_wrapper' => 1,
    'alpha_zone_branding_force' => 0,
    'alpha_zone_branding_order' => 0,
    'alpha_zone_branding_section' => 'header',
    'alpha_zone_branding_weight' => '1',
    'alpha_zone_branding_columns' => '12',
    'alpha_zone_branding_primary' => NULL,
    'alpha_zone_branding_css' => '',
    'alpha_zone_branding_wrapper_css' => '',
    'alpha_zone_branding_equal_height_container' => 0,
    'alpha_region_branding_force' => 1,
    'alpha_region_branding_zone' => 'branding',
    'alpha_region_branding_prefix' => '0',
    'alpha_region_branding_columns' => '4',
    'alpha_region_branding_suffix' => '0',
    'alpha_region_branding_weight' => '1',
    'alpha_region_branding_position' => '0',
    'alpha_region_branding_css' => '',
    'alpha_region_branding_equal_height_element' => 0,
    'alpha_region_branding_equal_height_container' => 0,
    'alpha_region_menu_force' => 1,
    'alpha_region_menu_zone' => 'branding',
    'alpha_region_menu_prefix' => '0',
    'alpha_region_menu_columns' => '8',
    'alpha_region_menu_suffix' => '0',
    'alpha_region_menu_weight' => '2',
    'alpha_region_menu_position' => '0',
    'alpha_region_menu_css' => '',
    'alpha_region_menu_equal_height_element' => 0,
    'alpha_region_menu_equal_height_container' => 0,
    'alpha_zone_featured_wrapper' => 0,
    'alpha_zone_featured_force' => 0,
    'alpha_zone_featured_order' => 0,
    'alpha_zone_featured_section' => 'header',
    'alpha_zone_featured_weight' => '2',
    'alpha_zone_featured_columns' => '12',
    'alpha_zone_featured_primary' => NULL,
    'alpha_zone_featured_css' => '',
    'alpha_zone_featured_wrapper_css' => '',
    'alpha_zone_featured_equal_height_container' => 0,
    'alpha_region_featured_force' => 0,
    'alpha_region_featured_zone' => 'featured',
    'alpha_region_featured_prefix' => '0',
    'alpha_region_featured_columns' => '12',
    'alpha_region_featured_suffix' => '0',
    'alpha_region_featured_weight' => '1',
    'alpha_region_featured_position' => '0',
    'alpha_region_featured_css' => '',
    'alpha_region_featured_equal_height_element' => 0,
    'alpha_region_featured_equal_height_container' => 0,
    'alpha_zone_highlighted_wrapper' => 0,
    'alpha_zone_highlighted_force' => 0,
    'alpha_zone_highlighted_order' => 0,
    'alpha_zone_highlighted_section' => 'content',
    'alpha_zone_highlighted_weight' => '1',
    'alpha_zone_highlighted_columns' => '12',
    'alpha_zone_highlighted_primary' => NULL,
    'alpha_zone_highlighted_css' => '',
    'alpha_zone_highlighted_wrapper_css' => '',
    'alpha_zone_highlighted_equal_height_container' => 0,
    'alpha_region_highlighted_force' => 0,
    'alpha_region_highlighted_zone' => 'highlighted',
    'alpha_region_highlighted_prefix' => '0',
    'alpha_region_highlighted_columns' => '12',
    'alpha_region_highlighted_suffix' => '0',
    'alpha_region_highlighted_weight' => '0',
    'alpha_region_highlighted_position' => '0',
    'alpha_region_highlighted_css' => '',
    'alpha_region_highlighted_equal_height_element' => 0,
    'alpha_region_highlighted_equal_height_container' => 0,
    'alpha_zone_content_wrapper' => 1,
    'alpha_zone_content_force' => 1,
    'alpha_zone_content_order' => 0,
    'alpha_zone_content_section' => 'content',
    'alpha_zone_content_weight' => '2',
    'alpha_zone_content_columns' => '12',
    'alpha_zone_content_primary' => NULL,
    'alpha_zone_content_css' => '',
    'alpha_zone_content_wrapper_css' => '',
    'alpha_zone_content_equal_height_container' => 0,
    'alpha_region_sidebar_first_force' => 0,
    'alpha_region_sidebar_first_zone' => 'content',
    'alpha_region_sidebar_first_prefix' => '0',
    'alpha_region_sidebar_first_columns' => '4',
    'alpha_region_sidebar_first_suffix' => '0',
    'alpha_region_sidebar_first_weight' => '1',
    'alpha_region_sidebar_first_position' => '0',
    'alpha_region_sidebar_first_css' => '',
    'alpha_region_sidebar_first_equal_height_element' => 0,
    'alpha_region_sidebar_first_equal_height_container' => 0,
    'alpha_region_content_force' => 0,
    'alpha_region_content_zone' => 'content',
    'alpha_region_content_prefix' => '0',
    'alpha_region_content_columns' => '12',
    'alpha_region_content_suffix' => '0',
    'alpha_region_content_weight' => '1',
    'alpha_region_content_position' => '0',
    'alpha_region_content_css' => '',
    'alpha_region_content_equal_height_element' => 0,
    'alpha_region_content_equal_height_container' => 0,
    'alpha_region_sidebar_second_force' => 0,
    'alpha_region_sidebar_second_zone' => 'content',
    'alpha_region_sidebar_second_prefix' => '0',
    'alpha_region_sidebar_second_columns' => '12',
    'alpha_region_sidebar_second_suffix' => '0',
    'alpha_region_sidebar_second_weight' => '3',
    'alpha_region_sidebar_second_position' => '0',
    'alpha_region_sidebar_second_css' => '',
    'alpha_region_sidebar_second_equal_height_element' => 0,
    'alpha_region_sidebar_second_equal_height_container' => 0,
    'alpha_zone_media_wrapper' => 0,
    'alpha_zone_media_force' => 0,
    'alpha_zone_media_order' => 0,
    'alpha_zone_media_section' => 'content',
    'alpha_zone_media_weight' => '4',
    'alpha_zone_media_columns' => '12',
    'alpha_zone_media_primary' => NULL,
    'alpha_zone_media_css' => '',
    'alpha_zone_media_wrapper_css' => '',
    'alpha_zone_media_equal_height_container' => 0,
    'alpha_region_postscript_first_force' => 0,
    'alpha_region_postscript_first_zone' => 'media',
    'alpha_region_postscript_first_prefix' => '0',
    'alpha_region_postscript_first_columns' => '12',
    'alpha_region_postscript_first_suffix' => '0',
    'alpha_region_postscript_first_weight' => '1',
    'alpha_region_postscript_first_position' => '0',
    'alpha_region_postscript_first_css' => '',
    'alpha_region_postscript_first_equal_height_element' => 0,
    'alpha_region_postscript_first_equal_height_container' => 0,
    'alpha_region_postscript_second_force' => 0,
    'alpha_region_postscript_second_zone' => 'media',
    'alpha_region_postscript_second_prefix' => '0',
    'alpha_region_postscript_second_columns' => '12',
    'alpha_region_postscript_second_suffix' => '0',
    'alpha_region_postscript_second_weight' => '2',
    'alpha_region_postscript_second_position' => '0',
    'alpha_region_postscript_second_css' => '',
    'alpha_region_postscript_second_equal_height_element' => 0,
    'alpha_region_postscript_second_equal_height_container' => 0,
    'alpha_zone_footer_wrapper' => 1,
    'alpha_zone_footer_force' => 0,
    'alpha_zone_footer_order' => 0,
    'alpha_zone_footer_section' => 'footer',
    'alpha_zone_footer_weight' => '1',
    'alpha_zone_footer_columns' => '12',
    'alpha_zone_footer_primary' => NULL,
    'alpha_zone_footer_css' => '',
    'alpha_zone_footer_wrapper_css' => '',
    'alpha_zone_footer_equal_height_container' => 0,
    'alpha_region_map_toolbar_force' => 0,
    'alpha_region_map_toolbar_zone' => 'footer',
    'alpha_region_map_toolbar_prefix' => '0',
    'alpha_region_map_toolbar_columns' => '12',
    'alpha_region_map_toolbar_suffix' => '0',
    'alpha_region_map_toolbar_weight' => '0',
    'alpha_region_map_toolbar_position' => '4',
    'alpha_region_map_toolbar_css' => '',
    'alpha_region_map_toolbar_equal_height_element' => 0,
    'alpha_region_map_toolbar_equal_height_container' => 0,
    'alpha_region_questions_force' => 0,
    'alpha_region_questions_zone' => 'footer',
    'alpha_region_questions_prefix' => '0',
    'alpha_region_questions_columns' => '8',
    'alpha_region_questions_suffix' => '0',
    'alpha_region_questions_weight' => '0',
    'alpha_region_questions_position' => '0',
    'alpha_region_questions_css' => '',
    'alpha_region_questions_equal_height_element' => 0,
    'alpha_region_questions_equal_height_container' => 0,
    'alpha_region_footer_first_force' => 0,
    'alpha_region_footer_first_zone' => 'footer',
    'alpha_region_footer_first_prefix' => '0',
    'alpha_region_footer_first_columns' => '6',
    'alpha_region_footer_first_suffix' => '0',
    'alpha_region_footer_first_weight' => '1',
    'alpha_region_footer_first_position' => '0',
    'alpha_region_footer_first_css' => '',
    'alpha_region_footer_first_equal_height_element' => 0,
    'alpha_region_footer_first_equal_height_container' => 0,
    'alpha_region_footer_second_force' => 1,
    'alpha_region_footer_second_zone' => 'footer',
    'alpha_region_footer_second_prefix' => '0',
    'alpha_region_footer_second_columns' => '6',
    'alpha_region_footer_second_suffix' => '0',
    'alpha_region_footer_second_weight' => '2',
    'alpha_region_footer_second_position' => '0',
    'alpha_region_footer_second_css' => '',
    'alpha_region_footer_second_equal_height_element' => 0,
    'alpha_region_footer_second_equal_height_container' => 0,
    'collapsiblock_block' => 'section.block',
    'collapsiblock_title' => 'h2.block-title',
    'collapsiblock_content' => 'div.content',
    'hurricane_renderers' => array(
      'hurricane' => 'hurricane',
      'drop' => 0,
      'twister' => 0,
    ),
    'hurricane_font-family' => 'hurricane',
    'hurricane_color' => '#A52A2A',
    'hurricane_background-color' => '#000000',
    'hurricane_line-height' => '46',
    'hurricane_text-indent' => '100',
    'hurricane_word-spacing' => '30',
    'hurricane_letter-spacing' => '14',
    'hurricane_font-size' => '50',
    'hurricane_font-weight' => '5',
    'hurricane_text-transform' => '0',
    'hurricane_text-decoration' => '0',
    'hurricane_text-align' => '0',
    'hurricane_white-space' => '0',
    'hurricane_font-style' => '0',
    'nice_menus_custom_css' => '',
  );
  $export['theme_devtrac_classic_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 0,
    'collapsiblock_block' => 'section.block',
    'collapsiblock_title' => 'h2.block-title',
    'collapsiblock_content' => 'div.content',
    'nice_menus_custom_css' => '',
  );
  $export['theme_settings'] = $strongarm;

  return $export;
}
