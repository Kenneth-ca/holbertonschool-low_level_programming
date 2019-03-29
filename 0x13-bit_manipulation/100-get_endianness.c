#include "holberton.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big indian, 1 if little indian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *indian = (char *) &i;

	return (*indian ? 1 : 0);
}
