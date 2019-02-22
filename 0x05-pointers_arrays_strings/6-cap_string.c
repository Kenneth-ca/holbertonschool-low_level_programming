#include "holberton.h"
#include <stdio.h>

/**
 * *cap_string - check the code for Holberton School students.
 *
 * @s: argument for the function.
 *
 * Return: Always 0.
 */
char *cap_string(char *s)
{
int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i - 1] == 32 ||
			s[i - 1] == 46 ||
			s[i - 1] == 10 ||
			s[i - 1] == 9 ||
			i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
		}
	}
return (s);
}
