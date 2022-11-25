#ifndef _MAIN_H_
#define _MAIN_H_

/* including standard library */
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/* Prototypes */
int _printf(const char *format, ...);
int (*get_checker(char *format))(va_list);

typedef struct Check
{
	char* check;
	int (*f)(va_list);
} check;


#endif /* _MAIN_H_ */
