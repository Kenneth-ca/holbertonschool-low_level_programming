#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: string printed between the strings
 * @n: number of parameters
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
const char *s;

va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("%p", s);
		else
			printf("%s", s);
		if ((separator != NULL) && (i < n - 1))
			printf("%s", separator);
	}
printf("\n");
va_end(ap);

}
