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
int n = 0;
int h = 0;

if (needle[0] == '\0')
	return (haystack);
while (haystack[h])
{
	if (haystack[h] == needle[n])
	{
		n++;
		if (needle[n] == '\0')
		return (haystack + h + 1 - n);
	}
	else
		n = 0;
	h++;
}
return (0);
}
