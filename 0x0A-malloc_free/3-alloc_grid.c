#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointes to a 2 dimentional array
 * @width: argument for the function
 * @height: argument for the function
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
int i = 0;
char *s;
int size = 0;

	for (i = 0; i < height;

	if (str == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	s = malloc((size + 1) * sizeof(char));
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
