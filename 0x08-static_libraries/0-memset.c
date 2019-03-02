#include "holberton.h"
#include <stdio.h>

/**
 * *_memset - prints buffer in hexa
 * @s: argument for the function
 * @b: argument for the function
 * @n: argument for the function
 *
 * Return: an array.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
	for (i = 0; i < n; i++)
		s[i] = b;
return (s);
}
