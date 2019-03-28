#include "holberton.h"

/**
 * recursion - converts to binary recursively
 * @n: the number to be converted
 *
 * Return: nothing.
 */

void recursion(unsigned long int n)
{
	if (n != 0)
	{
		recursion(n >> 1);
		_putchar((n & 1) + '0');
	}
}

/**
 * print_binary - converts to binary
 * @n: the number to be converted
 *
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar ('0');
	else
		recursion(n);
}
