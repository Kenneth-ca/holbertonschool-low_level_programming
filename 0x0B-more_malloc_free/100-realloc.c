#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: argument for the function
 * @old_size: argument for the function
 * @new_size: argument for the function
 *
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size == old_size)
	return (ptr);
if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
free(ptr);
ptr = malloc(sizeof(char) * new_size);
if (ptr == NULL)
{
	free(ptr);
	return (NULL);
}
return (ptr);
}
