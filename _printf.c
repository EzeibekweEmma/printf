#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: this is a character string
 * @...: argument
 *
 * Return: -1 || 0
 */

int _printf(const char *format, ...)
{
	int i = 0;

	while (format[i])
	{
		write(1, &format[i], 1);
		i++;
	}


	return (0);
}
