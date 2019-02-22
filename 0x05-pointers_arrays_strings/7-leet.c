#include "holberton.h"
#include <stdio.h>

/**
 * *leet - check the code for Holberton School students.
 *
 * @s: argument for the function.
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
int i, k;
char letter[] = "aAeEoOtTlL";
char number[] = "4433007711";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; letter[k] != '\0'; k++)
			if (s[i] == letter[k])
				s[i] = number[k];
	}
return (s);
}
