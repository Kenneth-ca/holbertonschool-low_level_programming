#include "holberton.h"

/**
 * print_line - check the code for Holberton School students
 * @n: argument for the function
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
while (n != 0)
{
	if (n > 0)
	n--;
	else
	n++;
_putchar('_');
}
_putchar(10);
}
