#include "main.h"
#include <unistd.h>

/**
 * print_s - prints a character to stdout
 * @args: varadic argments or params
 *
 * Return: number of character
 */

int print_s(va_list args)
{
	char s = (char)va_arg(args, int);
	int count = 0;

	if (s)
	{
		count = write(1, &s, 1);
		return (count);
	}
	return (0);

}
