#include "holberton.h"
#include <stdio.h>

/**
 * _print_rev_recursion - A function that prints a string in reverse..
 *
 * @s: a string used as argument for the function
 *
 * Return: void function, there is no return.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
