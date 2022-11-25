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

		}  else
		{
			i++;

			if (format[i] == 'c')
				countStr = write(1, &format[i], 1);
			else if (format[i] == 's')
				countStr = write(1, &format[i], 1);
			else
			{
				write(1, "\nerror... '", 10);
				write(1, "%", 1);
				write(1, &format[i], 1);
				write(1, "'", 1);
				break;
			}
			i++;


			total += countStr;

		}
	}



	return (total);
}
