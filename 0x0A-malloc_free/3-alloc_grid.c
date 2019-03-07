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
int i, j;
int **s;

if (width <= 0)
	return (NULL);
if (height <= 0)
	return (NULL);
s = malloc(sizeof(int *) * height);
if (s == NULL)
{
	free(s);
	return (NULL);
}
for (i = 0; i < height; i++)
{
	s[i] = malloc(sizeof(int) * width);
	if (s[i] == NULL)
	{
		for (; i >= 0; i--)
		{
			free(s[i]);
		}
		free(s);
		return (NULL);
	}
}
for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
	{
		s[i][j] = 0;
	}
}
return (s);
}
