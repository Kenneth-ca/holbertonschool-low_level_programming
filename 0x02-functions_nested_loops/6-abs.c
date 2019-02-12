#include "holberton.h"

/**
 * _abs - check the code for Holberton School students
 * @n: argument for abs function
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
int sign;

if (n >= 0)
sign = n;
else
sign = -n;

return (sign);
	}
