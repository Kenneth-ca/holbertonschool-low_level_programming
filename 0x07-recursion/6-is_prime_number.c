#include "holberton.h"
#include <stdio.h>

/**
 * primo - Find prime number.
 *
 * @n: Argument for the function.
 * @i: Argument for the function.
 *
 * Return: 1 if prime number, otherwise 0..
 */
int primo(int n, int i, int compare)
{
	if (n > 1 && n < 97)
	{
		if (n % i == 0)
			compare++;
		if (i == 97)
		{
			if (compare <= 1)
				return (1);
			if (compare > 1)
				return (0);
		}
	}
	if (n >= 97)
	{
		if (n % i == 0)
			compare++;

		if (i == 97)
		{
			if (compare > 0)
				return (0);
			else
				return (1);
		}
	}
i++;
if (i < 98)
	return(primo(n, i, compare));
return (0);
}
/**
 * is_prime_number - Identify prime numbers.
 *
 * @n: Argument for the function.
 *
 * Return: 1 if prime number, otherwise 0.
 */
int is_prime_number(int n)
{
int result = 0;

result = primo(n, 2, 0);
return (result);
}
