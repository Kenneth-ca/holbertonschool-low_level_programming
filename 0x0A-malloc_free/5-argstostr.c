#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: argument for the function
 * @av: argument for the function
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
int i, j;
char *s;
int size = 0, c = 0;

if (ac == 0)
	return (NULL);
for (i = 0; i < ac; i++)
{
	if (av == NULL)
		return (NULL);
	for (j = 0; av[i][j] != '\0'; j++)
	{
		size++;
	}
}
s = malloc(sizeof(char) * ac * size + ac);
if (s == NULL)
{
	free(s);
	return (NULL);
}
for (i = 0; i < ac; i++)
{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		s[c] = av[i][j];
		c++;
	}
s[c] = '\n';
c++;
}
return (s);
}
