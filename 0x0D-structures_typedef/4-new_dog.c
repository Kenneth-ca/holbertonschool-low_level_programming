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
	{
		free(s);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
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
dog_t *perro_nuevo;

perro_nuevo = malloc(sizeof(struct dog));
	if (perro_nuevo == NULL)
	{
		free(perro_nuevo);
		return (NULL);
	}
perro_nuevo->owner = _strdup(owner);
	if (perro_nuevo->owner == NULL)
	{
		free(perro_nuevo);
		return (NULL);
	}
perro_nuevo->name = _strdup(name);
	if (perro_nuevo->name == NULL)
	{
		free(perro_nuevo->owner);
		free(perro_nuevo);
		return (NULL);
	}
perro_nuevo->age = age;
return (perro_nuevo);
}
