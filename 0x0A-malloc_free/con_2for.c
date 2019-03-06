#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _str_concat - A function that concatenates
 * @str: argument for the function
 *
 * Return: Nothing.
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0;
char *s;
int size_s1 = 0;
int size_s2 = 0;
int total = 0;

	while (s1[i] != '\0')
	{
		size_s1++;
		i++;
	}
	printf("Valor size : %d\t", size_s1);
	printf("Valor i para betty : %d\n", i);
	i = 0;
	while (s2[i] != '\0')
	{
		size_s2++;
		i++;
	}
	printf("Valor size : %d\t", size_s2);
	printf("Valor i para holberton : %d\n", i);
	total = size_s1 + size_s2;
	printf("TAMANO : %d\n", total);
	s = malloc(total * sizeof(char));
	printf("TAMANO : %d\n", total);
	printf("Tamano suma: %lu\n", sizeof(s));
	printf("Tamano Betty : %lu\n", sizeof(size_s1));
	printf("Tamano Holberton:%lu\n", sizeof(size_s2));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size_s1)
	{
		s[i] = s1[i];
		i++;
	}
	while (i < size_s1)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
return (s);
}
