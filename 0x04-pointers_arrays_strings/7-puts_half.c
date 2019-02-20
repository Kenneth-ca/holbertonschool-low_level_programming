#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - check the code for Holberton School students
 * @str: argument for the function
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
int i, n;
i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	n = i / 2;
	else
	n = (i - 1) / 2;
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(*(str + i));
	}
_putchar(10);
}
