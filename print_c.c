#include "main.h"
#include <unistd.h>

/**
 * print_c - prints a character to stdout
 * @args: varadic argments or params
 *
 * Return: number of character
 */

int print_c(va_list args)
{
	char c = (char)va_arg(args, int);
	int count = 0;

	if (c)
	{
		count = write(1, &c, 1);
		return (count);
	}
	return (0);

}
