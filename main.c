#include "main.h"

/**
 * main - main function
 * Return: Always return (0)
 */

int main(void)
{
	int ourLen;
	int sysLen;

	write(1, "our function\n", 13);
	ourLen = _printf("Let's try to printf a simple sentence.\n");
	printf("Length = %d\n", ourLen);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");


	printf("\nsystem function\n");
	sysLen =  printf("Let's try to printf a simple sentence.\n");
	printf("Length = %d\n", sysLen);
	printf("Character:[%c]\n", 'H');
	printf("String:[%s]\n", "I am a string !");


	return (0);
}
