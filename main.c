#include "main.h"

int main()
{
	int ourLen;
	int sysLen;

	write(1, "our function\n", 13);
	ourlen = _printf("Let's try to printf a simple sentence.\n");
	printf("%d", ourLen);

	printf("system function\n");
	sysLen =  printf("Let's try to printf a simple sentence.\n");
	printf("%d", sysLen);


	return (0);
}
