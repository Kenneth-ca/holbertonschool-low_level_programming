#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - executes a function given a parameter
 * @array: array argument for the function
 * @size: size of the array
 * @cmp: pointer to function
 *
 * Return: An integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, compare = 0;
if (array && size && cmp)
{
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		compare = (*cmp)(array[i]);
		if (compare != 0)
		{
			break;
		}
	}
	if (compare != 0)
		return (i);
	else
		return (-1);
}
}
