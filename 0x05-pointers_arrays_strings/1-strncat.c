#include "holberton.h"
#include <stdio.h>

/**
 * *_strcat - check the code for Holberton School students.
 *
 * @dest: argument for the function.
 * @src: argument for the function.
 *
 * Return: Always 0.
 */
char _strcat(char *dest, char *src)
{
int i, lenght;
	while (dest[i] != '\0')
		lenght++;
	for (i = 0; dest[i] != '\0'; i++)
		dest[lenght + i] = src[i];
return (dest);
}
