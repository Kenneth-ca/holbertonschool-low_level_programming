#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - check the code for Holberton School students
 *
 *@str: argument for the function
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i, n, lenght;
i = 0;
	while (str[i] != '\0')
		i++;
	lenght = i;
	if (i % 2 != 0)
		n = (lenght - 1) / 2;
	else
		n = lenght / 2;
	for (i = n; i < lenght; i++)
		_putchar(*(str + i));
_putchar(10);
}
