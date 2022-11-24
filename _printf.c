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
	int countStr = 0, total = 0, i = 0;
	va_list args;

	va_start(args, format);
	int (*f)(va_list);

	/*checking if format is NULL values*/
	if (format == NULL)
		return (-1);

	/* printing the value of format*/
	while (format[i])
	{
		if (format[i] != '%')
		{
			countStr = write(1, &format[i], 1);
			i++;
			total += countStr;

		}

		if (format[i] == '%')
		{
			f = identifier_checker(&format[i + 1]);
			if (f != NULL)
			{
				countStr = f(args);
				total += countStr;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
			{
				break;
			}
			if (format[i + 1] != '\0')
			{
				countStr = write(1, &format[i], 1);
				i = i + 2;
				total += countStr;
				continue;
			}
		}
	}
	return (total);
}
