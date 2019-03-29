#include "holberton.h"

/**
 * clear_bit - sets to 0 at index
 * @n: a number that enters the function
 * @index: the index
 *
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
