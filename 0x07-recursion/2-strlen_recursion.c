#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - A function that returns the length of a string.
 *
 * @s: a string used as argument for the function
 *
 * Return: void function, there is no return.
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
	return (_strlen_recursion(s + 1) + 1);
}
else
	return (0);
}
