#include "holberton.h"
#include <stdio.h>

/**
 * *_strcmp - check the code for Holberton School students.
 *
 * @s1: argument for the function.
 * @s2: argument for the function.
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, diferencia = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diferencia = s1[i] - s2[i];
			break;
		}
		else
			diferencia = 0;
			i++;
	}
return (diferencia);
}
