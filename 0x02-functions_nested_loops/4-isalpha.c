#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students
 * @c: argument for isalpha function
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
int lower;
if ((c > 96 && c < 123) || (c > 64 && c < 91))
lower = 1;
else
lower = 0;

return (lower);
	}
