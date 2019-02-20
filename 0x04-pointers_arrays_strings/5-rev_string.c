#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - check the code for Holberton School students
 * @s: argument for the function
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i, aux, j;
j = 0;
while (s[j] != '\0')
	j++;
j = j - 1;
i = 0;
while (i != j && i < j)
{
	aux = s[j];
	s[j] = s[i];
	s[i] = aux;
	i++;
	j--;
}
}
