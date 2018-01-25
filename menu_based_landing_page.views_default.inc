<?php

/**
 * @file
 * Default views.
 */

/**
 * Implements hook_views_default_views().
 */
function menu_based_landing_page_views_default_views() {
    // Begin copy and paste of output from the Export tab of a view.
    $view = new view();
    $view->name = 'menu_based_landing_pages';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Menu Based Landing Pages';
    $view->core = 7;
    $view->api_version = '3.0';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['use_more_always'] = FALSE;
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'none';
    $handler->display->display_options['pager']['options']['offset'] = '0';
    $handler->display->display_options['style_plugin'] = 'byu_card';
    $handler->display->display_options['row_plugin'] = 'fields';
    $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = '';
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
    $handler->display->display_options['fields']['title']['element_type'] = 'h3';
    $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
    /* Field: Content: Body */
    $handler->display->display_options['fields']['body']['id'] = 'body';
    $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
    $handler->display->display_options['fields']['body']['field'] = 'body';
    $handler->display->display_options['fields']['body']['label'] = '';
    $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
    $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
    $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
    $handler->display->display_options['fields']['body']['settings'] = array(
        'trim_length' => '200',
    );
    /* Sort criterion: Menu: Weight */
    $handler->display->display_options['sorts']['weight']['id'] = 'weight';
    $handler->display->display_options['sorts']['weight']['table'] = 'menu_links';
    $handler->display->display_options['sorts']['weight']['field'] = 'weight';
    /* Contextual filter: Content: Menu children */
    $handler->display->display_options['arguments']['menu_children_filter']['id'] = 'menu_children_filter';
    $handler->display->display_options['arguments']['menu_children_filter']['table'] = 'node';
    $handler->display->display_options['arguments']['menu_children_filter']['field'] = 'menu_children_filter';
    $handler->display->display_options['arguments']['menu_children_filter']['default_action'] = 'default';
    $handler->display->display_options['arguments']['menu_children_filter']['default_argument_type'] = 'node';
    $handler->display->display_options['arguments']['menu_children_filter']['summary']['number_of_records'] = '0';
    $handler->display->display_options['arguments']['menu_children_filter']['summary']['format'] = 'default_summary';
    $handler->display->display_options['arguments']['menu_children_filter']['summary_options']['items_per_page'] = '25';
    $handler->display->display_options['arguments']['menu_children_filter']['target_menu'] = 'main-menu';
    /* Filter criterion: Content: Published */
    $handler->display->display_options['filters']['status']['id'] = 'status';
    $handler->display->display_options['filters']['status']['table'] = 'node';
    $handler->display->display_options['filters']['status']['field'] = 'status';
    $handler->display->display_options['filters']['status']['value'] = 1;
    $handler->display->display_options['filters']['status']['group'] = 1;
    $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

    /* Display: Block */
    $handler = $view->new_display('block', 'Block', 'block_1');


  // (Export ends here.)

    // Add view to list of views to provide.
    $views[$view->name] = $view;

    // ...Repeat all of the above for each view the module should provide.

    // At the end, return array of default views.
    return $views;
}

