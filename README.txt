/***CONFIGURATION***/
This module creates the next configuration page
admin/config/system/employees-import

In this page you can configure the URL for getting the employee data in format JSON

/***IMPORTING DATA***/
The import process was configured in the cron of drupal
for executing the cron process you should go to
Configuration > cron
or using the next url 
admin/config/system/cron

and press the button "Run cron"


/***DISPLAYING DATA***/
This module creates a view called "Lista Empleados"
the url is
/employee-list
