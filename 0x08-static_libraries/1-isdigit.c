#include "holberton.h"

/**
 * _isdigit - check the code for Holberton School students
 * @c: argument for the function
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
int digit;
if (c > 47 && c < 58)
digit = 1;
else
digit = 0;

return (digit);
}
