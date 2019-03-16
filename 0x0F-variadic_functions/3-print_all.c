#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * go_to_func - a function that prints anything
 * @format: format of what will be printed
 *
 * Return: nothing
*/

typedef struct tp
{
	char type;
	char *symbol;
} tp_t;

tp_t tps[] = {
	{"c", "%c"},
	{"

/**
 * print_all - a function that prints anything
 * @format: format of what will be printed
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
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
		if (i == n - 1)
		{
			printf("\n");
		}
		else if (separator != NULL)
			printf("%s", separator);
	}
va_end(ap);

}
