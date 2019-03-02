#include "holberton.h"
#include <stdio.h>

/**
 * *_strncpy - check the code for Holberton School students.
 *
 * @dest: argument for the function.
 * @src: argument for the function.
 * @n: argument for the function.
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
return (dest);
}
