#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - prints buffer in hexa
 * @s: argument string
 * @accept: set of bytes to be searched
 *
 * Return: an array.
 */
char *_strpbrk(char *s, char *accept)
{
int i, k;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
			return (s + i);
		}
	}
return (NULL);
}
