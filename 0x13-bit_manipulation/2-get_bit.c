#include "holberton.h"

/**
 * get_bit - return the value of a bit given an index
 * @n: the input number
 * @index: the index
 *
 * Return: return the value selected by index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
	{
		return (n >> index & 1);
	}
	return (-1);
}
