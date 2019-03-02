#include "holberton.h"
#include <stdio.h>

/**
 * *_strspn - prints buffer in hexa
 * @s: argument string
 * @accept: set of bytes to be searched
 *
 * Return: an array.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, k, cont = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
			cont++;
		}
	if (cont < i + 1)
	return (cont);
	}
return (cont);
}
