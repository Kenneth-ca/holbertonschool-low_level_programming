#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - check the code for Holberton School students
 * @str: argument for the function
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
int i;
i = 0;

for (i = 0; str[i] != '\0'; i++)
{
	if (i % 2 == 0)
	_putchar(*(str + i));
}
_putchar(10);
}
