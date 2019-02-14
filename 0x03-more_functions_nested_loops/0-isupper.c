#include "holberton.h"

/**
 * _isupper - check the code for Holberton School students
 * @c: argument for the function
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
int upper;
if (c > 64 && c < 91)
upper = 1;
else
upper = 0;

return (upper);
}
