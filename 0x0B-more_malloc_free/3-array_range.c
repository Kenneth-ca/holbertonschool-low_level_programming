#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: argument for the function
 * @max: argument for the function
 *
 * Return: an array of integers
 */
int *array_range(int min, int max)
{
int *array;
int i, total;

total = max - min;
if (min > max)
	return (NULL);
array = malloc((total + 1) * sizeof(int));
array = malloc((total + 1) * sizeof(int));
if (array == NULL)
{
	free(array);
	return (NULL);
}
for (i = 0; i <= total; i++)
{
	array[i] = min;
	min++;
}
return (array);
}
