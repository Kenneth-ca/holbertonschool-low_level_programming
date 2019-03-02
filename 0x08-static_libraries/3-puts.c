#include "holberton.h"
#include <stdio.h>

/**
 * _puts - check the code for Holberton School students
 * @s: argument for the function
 *
 * Return: Always 0.
 */
void _puts(char *s)
{
int i;
while (s[i] != '\0')
{
_putchar(*(s + i));
i++;
}
_putchar(10);
}
