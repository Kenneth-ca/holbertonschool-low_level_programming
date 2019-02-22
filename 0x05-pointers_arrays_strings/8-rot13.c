#include "holberton.h"
#include <stdio.h>

/**
 * *rot13 - check the code for Holberton School students.
 *
 * @s: argument for the function.
 *
 * Return: Always 0.
 */
char *rot13(char *s)
{
int i, k;
char primeros[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
char ultimos[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	for (i = 0; s[i] != '\0' ; i++)
	{
		k = 0;
		while (s[k])
		{
			if (s[i] == primeros[k])
			{
				s[i] = ultimos[k];
				break;
			}
			k++;
		}
	}
return (s);
}
