#include "holberton.h"
#include <stdio.h>

/**
 * factorial - A function that returns the factorial of a given number.
 *
 * @n: Argument for the function
 *
 * Return: void function, there is no return.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
