#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - check the code for Holberton School students
 * @s: argument for the function
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i, len;
i = 0;
	while (s[i] != '\0')
	i++;
	len = i - 1;
	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
_putchar(10);
}
