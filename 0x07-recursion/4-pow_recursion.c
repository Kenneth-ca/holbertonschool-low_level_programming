#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - A function for pow.
 *
 * @x: argument for the function
 * @y: argument for the function
 *
 * Return: void function, there is no return.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
return (_pow_recursion(x, y - 1) * x);

}
