#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - A function that concatenates
 * @s1: argument for the function
 * @s2: argument for the function
 *
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0;
char *s;
int size_s1 = 0;
int size_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		size_s1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		size_s2++;
		i++;
	}
	s = malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < (size_s1 + size_s2))
	{
		if (i < size_s1)
		{
			s[i] = s1[i];
		}
		if (i >= size_s1)
		{
			s[i] = s2[j];
			j++;
		}
	i++;
	}
	s[i] = '\0';
return (s);
}
