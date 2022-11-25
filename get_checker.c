#include "main.h"

int (*get_checker(char *format))(va_list)
{
	check_t checks[] = {
		{"c", check_c},
		{"s", check_s},
		{NULL, NULL}
	};
	int i = 0;

	checks[].check;
}
