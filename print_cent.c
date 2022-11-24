#include "main.h"
#include <unistd.h>

/**
 * print_cent - prints a character to stdout
 * @args: varadic argments or params
 *
 * Return: number of character
 */

int print_cent(va_list args)
{
	char cent = (char)va_arg(args, int);
	int count = 0;

	if (cent)
	{
		count = write(1, &cent, 1);
		return (count);
	}
	return (0);

}
