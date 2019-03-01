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
int primo(int n, int i)
{
for (i = 2; i < 97; i++)
{
	if (n > 1 && n < 97)
	{
		if (n % i == 0)
			compare++;
		if (i == 97)
		{
			if (compare == 1)
				return (1);
			if (compare > 1)
				return (0);
		}
	}
	if (n > 97)
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
}
return (0);
}
/**
 * is_prime_number - Identify prime numbers..
 *
 * @n: Argument for the function.
 *
 * Return: 1 if prime number, otherwise 0..
 */
int is_prime_number(int n)
{
int i = 0;
int compare = 0;
int result = 0;
result = primo (n, i, compare);
return (result)
}
