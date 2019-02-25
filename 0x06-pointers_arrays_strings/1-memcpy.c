#include "holberton.h"
#include <stdio.h>

/**
 * *_memcpy - prints buffer in hexa
 * @dest: argument for the function
 * @src: argument for the function
 * @n: argument for the function
 *
 * Return: an array.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
return (dest);
}
