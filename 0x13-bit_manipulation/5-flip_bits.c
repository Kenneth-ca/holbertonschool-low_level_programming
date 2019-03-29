#include "holberton.h"

/**
 * flip_bits - will flip a number to get another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number, i, var, result = 0;

	number = n ^ m;
	for (i = 0; number != 0; i++)
	{
		var = number & 1;
		number = number >> 1;
		if (var == 1)
		{
			result++;
		}
	}
	return (result);
}
