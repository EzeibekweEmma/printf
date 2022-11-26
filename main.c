#include "main.h"

/**
 * main - main function
 * Return: Always return (0)
 */

int main(void)
{
	int ourLen = 0;
	int sysLen = 0;

	write(1, "our function\n", 13);
	ourLen = _printf("Let's try to printf a simple sentence with: %c character\n", 'H');
	printf("Length = %d\n", ourLen);


	write(1, "system function\n", 16);
	sysLen =  printf("Let's try to printf a simple sentence with: %c character\n", 'H');
	printf("Length = %d\n", sysLen);


	return (0);
}
