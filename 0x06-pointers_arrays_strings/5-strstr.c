#include "holberton.h"
#include <stdio.h>

/**
 * *_strstr - prints buffer in hexa
 * @haystack: argument string
 * @needle: set of bytes to be searched
 *
 * Return: an array.
 */
char *_strstr(char *haystack, char *needle)
{
int i, m, a = 0, cont = 0;

for (i = 0; haystack[i]; i++)
{
	if (haystack[i] == needle[0])
	{
		a = i;
		for (m = 0; needle[m]; m++)
		{
			if (haystack[m] == needle[m])
			{
				cont++;
			}
		}
		if (cont + 1 == m)
		{
			return (haystack + a);
		}
		cont = 0;
	}
}
return (NULL);
}
