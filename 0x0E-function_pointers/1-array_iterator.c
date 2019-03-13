#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given a parameter
 * @array: array argument for the function
 * @size: size of the array
 * @action: pointer to function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array && size && action)
{
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
}
