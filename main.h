#ifndef _MAIN_H_
#define _MAIN_H_

/* including standard library */
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/* Prototypes */
int _printf(const char *format, ...);
int (*identifier_checker(char *format))(va_list);

typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;


#endif /* _MAIN_H_ */
