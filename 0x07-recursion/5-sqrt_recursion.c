#include "holberton.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: Argument for the function.
 *
 * Return: 1 if is a prime number otherwise returns 0.
 */
int raiz(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	else if (i * i > n)
		return (-1);
	else
		return (raiz(n, i + 1));
	
}
int _sqrt_recursion(int n)
{
	int result;
	result = raiz(n, 1);
	return (result);
}
