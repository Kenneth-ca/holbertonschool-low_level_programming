#include "holberton.h"
#include <stdio.h>

/**
 * *_strchr - prints buffer in hexa
 * @s: string where to find c
 * @c: char to be located
 *
 * Return: an array.
 */
char *_strchr(char *s, char c)
{
int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i + 1] == c)
		return (s + i);
return (NULL);
}
