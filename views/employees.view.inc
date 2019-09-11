<?php

$view = new view();
$view->name = 'lista_empleados';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Lista Empleados';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Empleados';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '20';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = 'Nombre';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Edad Empleado */
$handler->display->display_options['fields']['employee_age']['id'] = 'employee_age';
$handler->display->display_options['fields']['employee_age']['table'] = 'field_data_employee_age';
$handler->display->display_options['fields']['employee_age']['field'] = 'employee_age';
$handler->display->display_options['fields']['employee_age']['label'] = 'Edad';
$handler->display->display_options['fields']['employee_age']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Content: ID Empleado */
$handler->display->display_options['fields']['employee_id']['id'] = 'employee_id';
$handler->display->display_options['fields']['employee_id']['table'] = 'field_data_employee_id';
$handler->display->display_options['fields']['employee_id']['field'] = 'employee_id';
$handler->display->display_options['fields']['employee_id']['label'] = 'ID';
/* Field: Content: Nombre Empleado */
$handler->display->display_options['fields']['employee_name']['id'] = 'employee_name';
$handler->display->display_options['fields']['employee_name']['table'] = 'field_data_employee_name';
$handler->display->display_options['fields']['employee_name']['field'] = 'employee_name';
$handler->display->display_options['fields']['employee_name']['label'] = 'Nombre';
$handler->display->display_options['fields']['employee_name']['exclude'] = TRUE;
/* Field: Content: Tipo de Salario */
$handler->display->display_options['fields']['employee_salary_type']['id'] = 'employee_salary_type';
$handler->display->display_options['fields']['employee_salary_type']['table'] = 'field_data_employee_salary_type';
$handler->display->display_options['fields']['employee_salary_type']['field'] = 'employee_salary_type';
$handler->display->display_options['fields']['employee_salary_type']['type'] = 'taxonomy_term_reference_plain';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'empleados' => 'empleados',
);

/* Display: Lista Empleados */
$handler = $view->new_display('page', 'Lista Empleados', 'page');
$handler->display->display_options['path'] = 'employee-list';

