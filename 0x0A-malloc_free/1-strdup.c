#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function that copy a string + use of malloc
 * @str: argument for the function
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
int i = 0;
char *s;
int size = 0;

	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
return (s);
}
