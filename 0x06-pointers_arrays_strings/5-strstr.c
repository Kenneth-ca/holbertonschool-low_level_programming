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
int i, k, equal = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = 0; needle[k]; k++)
		{
			if (haystack[i] == needle[k])
			{
				equal++;
				if (equal == k)
					return (needle);
			}
		}
	}
	if (equal >= k)
		return (needle);
return (NULL);
}
