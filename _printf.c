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

		} else
		{
			countStr = write(1, "!", 1);
			i++;
			total += countStr;

		}
	}



	return (total);
}
