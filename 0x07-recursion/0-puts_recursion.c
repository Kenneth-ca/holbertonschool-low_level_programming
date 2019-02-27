#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 *
 * @s: a string used as argument for the function
 *
 * Return: void function, there is no return.
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
else
	_putchar('\n');
}
