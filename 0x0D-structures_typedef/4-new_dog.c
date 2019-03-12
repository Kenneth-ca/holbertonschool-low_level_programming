#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - A function that copy a string + use of malloc
 * @str: argument for the function
 *
 * Return: Nothing.
 */
char *_strdup(char *str)
{
int i = 0;
char *s;
int size = 0;

	if (str == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		size++;
		i++;
	}
	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
return (s);
}

/**
 * new_dog - a function that creates a new dog (structure)
 *
 * @name: first member of the structure
 * @age: second member of the structure
 * @owner: third member of the structure
 *
 * Return: a new struct.
**/

dog_t *new_dog(char *name, float age, char *owner)
{
char *n;
char *o;
float a;
dog_t *perro_nuevo;

a = age;
o = _strdup(owner);
n = _strdup(name);
perro_nuevo = malloc(sizeof(n) + sizeof(o) + (a *sizeof(float)));
	if (perro_nuevo == NULL)
	{
		free(perro_nuevo);
		return (NULL);
	}
perro_nuevo->name = n;
perro_nuevo->owner = o;
perro_nuevo->age = a;
return (perro_nuevo);
}
