#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students
 * @n: argument for the function
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
int i, j;

i = 0;
while (i < n)
{
	for (j = i; j > 0; j--)
	_putchar(32);
_putchar(92);
_putchar(10);
i++;
}
if (n <= 0)
_putchar(10);
}
