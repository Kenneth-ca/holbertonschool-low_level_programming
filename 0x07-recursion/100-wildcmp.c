#include "holberton.h"
#include <stdio.h>

/**
 * wildcmp - Returns the natural square root of a number.
 *
 * @s1: String argument for the function.
 * @s2: String argument for the function.
 *
 * Return: 1 if is equal otherwise returns 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (1);
	}
	else if (*s1 == '\0')
		return (0);
	else
		return (wildcmp(s1 + 1, s2 + 1));
}
