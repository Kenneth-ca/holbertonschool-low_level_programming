#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students
 * @size: argument for the function
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
int i, j, new;

i = size;
for (new = 0; new < size; new++)
{
j = new;
i = size - j;
	while (i > 1)
	{
	_putchar(32);
	i--;
	}
	while (j >= 0)
	{
	_putchar('#');
	j--;
	}
_putchar(10);
}
if (size <= 0)
_putchar(10);
}
