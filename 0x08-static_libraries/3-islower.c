#include "holberton.h"

/**
 * _islower - check the code for Holberton School students
 * @c: argument for islower function
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
int lower;
if (c > 96 && c < 123)
lower = 1;
else
lower = 0;

return (lower);
	}

