#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: string printed between the numbers
 * @n: number of parameters
 *
 * Return: the sum
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(ap, int));
	if (i == n - 1)
		printf("\n");
	else
		printf("%s", separator);
	}
va_end(ap);
}
