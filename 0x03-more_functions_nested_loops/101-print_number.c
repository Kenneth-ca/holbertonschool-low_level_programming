#include "holberton.h"

/**
 * print_number - check the code for Holberton School students
 * @n: argument for the function
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
int mil, cen, dec, uni, m;
if (n < 0)
{
_putchar('-');
m = -n;
}
else
m = n;
if (m >= 0)
{
uni = m % 10;
	if (m > 9)
	{
	dec = m / 10 % 10;
		if (m > 99)
		{
		cen = m / 100 % 10;
			if (m > 999)
			{
			mil = m / 1000;
			_putchar(mil + '0');
			}
		_putchar(cen + '0');
		}
	_putchar(dec + '0');
	}
_putchar(uni + '0');
}
}
