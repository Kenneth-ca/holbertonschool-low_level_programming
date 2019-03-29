#include "holberton.h"

/**
 * set_bit - a function that sets the value of a bit to 1
 * @n: a number that enters the funtion
 * @index: the index
 *
 * Return: 1 if it worked, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
