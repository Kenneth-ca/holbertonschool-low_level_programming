#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: string to be converted
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0, pow = 1, num = 0;
	int length;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
	{
	}
	while (length--)
	{
		if (b[length] == '0' || b[length] == '1')
		{
			num = b[length] - '0';
			number = number + num * pow;
			pow = pow * 2;
		}
		else
			return (0);
	}
	return (number);
}
