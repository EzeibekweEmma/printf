#ifndef _MAIN_H_
#define _MAIN_H_

/* including standard library */
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/* Prototypes */
int _printf(const char *format, ...);
int (*identifier_checker(const char*))(va_list);


typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;

int print_c(va_list);
int print_s(va_list);
int print_cent(va_list);


#endif /* _MAIN_H_ */
