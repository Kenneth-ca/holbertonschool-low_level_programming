#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat - check the code for Holberton School students.
 *
 * @dest: argument for the function.
 * @src: argument for the function.
 * @n: argument for the function.
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, lenght = 0;
	while (dest[lenght] != '\0')
		lenght++;
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[lenght + i] = src[i];
return (dest);
}
