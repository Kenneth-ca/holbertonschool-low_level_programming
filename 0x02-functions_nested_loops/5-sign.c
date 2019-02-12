#include "holberton.h"

/**
 * print_sign - check the code for Holberton School students
 * @n: argument for print_sign function
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
int sign;
if (n > 0)
{
sign = 1;
_putchar('+');
}
if (n < 0)
{
sign = -1;
_putchar('-');
}
if (n == 0)
{
sign = 0;
_putchar('0');
}
return (sign);
	}
