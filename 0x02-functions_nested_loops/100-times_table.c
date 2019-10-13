#include "holberton.h"

/**
 * print_times_table - prints the n times table
 * @n: number of times
 * Return> nothing
 */

void print_times_table(int n)
{
	int i = 0, j = 0, mul = 0;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mul = i * j;
			if (!(mul / 10))
				_putchar(mul + '0');
			else if (!(mul / 100))
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0'); }
			else if (!(mul / 1000))
			{
				_putchar((mul / 100) + '0');
				_putchar(((mul / 10) % 10) + '0');
				_putchar((mul % 10) + '0'); }
			if (j < n)
			{
				_putchar(',');
				if (!(mul / 10))
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (!(mul / 100))
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
