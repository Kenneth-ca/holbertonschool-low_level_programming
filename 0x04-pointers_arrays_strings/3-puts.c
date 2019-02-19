#include "holberton.h"
#include <stdio.h>

/**
 * _puts - check the code for Holberton School students
 * @str: argument for the function
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
int i;
while (str[i] != '\0')
{
_putchar(*(str + i));
i++;
}
_putchar(10);
}
