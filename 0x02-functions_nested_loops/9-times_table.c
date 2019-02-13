#include "holberton.h"

/**
 * times_table - check the code for Holberton School students
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{

int n1, n2, table;

for (n1 = 0; n1 < 10; n1++)
{
	for (n2 = 0; n2 < 10; n2++)
	{
		table = n1 * n2;
		if (table <= 9 && n2 != 0)
		_putchar(32);
		if (table > 9)
		_putchar(table / 10 + '0');
		_putchar(table % 10 + '0');
		if (n2 < 9)
		{
		_putchar(',');
		_putchar(32);
		}
	}
_putchar(10);

}
}
