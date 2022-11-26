#include "main.h"
#include <unistd.h>
/**
 * identifier_checker - check that charater is a valid identifier
 * @format: identifier charater
 *
 * Return: pointer to function
 */


int (*identifier_checker(const char *format))(va_list)
{

	func_t my_arr[4] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_cent},
		{NULL, NULL}
	};

	int i;

	for (i = 0; my_arr[i].t != NULL; i++)
	{
		if (*(my_arr[i].t) == *format)
		{
			return (my_arr[i].f);
		}
	}
	return (NULL);
}
