#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: argument for the function
 * @s2: argument for the function
 * @n: argument for the function
 *
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
int i;
unsigned int j = 0;
unsigned int size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc((sizeof(s1) + sizeof(s2)) * sizeof(char) - 1);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		size++;
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	while (j < n)
	{
		if (n < size)
			s[i] = s2[j];
		j++;
		i++;
	}
s[i] = '\0';
return (s);
}
