#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - check the code for Holberton School students
 * @s: argument for the function
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i;
while (s[i] != '\0')
i++;
return (i);
}
