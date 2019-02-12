#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students
 * @n: argument for the function
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = -n % 10;
_putchar(n + '0');
}
else
{
n = n % 10;
_putchar(n + '0');
}

return (n);
	}
