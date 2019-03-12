#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function that prints the structure
 *
 * @d: structure dog contains all the basic info
 *
 * return - nothing.
**/

void print_dog(struct dog *d)
{
if (d == NULL)
	return;
if (d->name == NULL)
	printf("Name: %p\n", NULL);
else
	printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (d->name == NULL)
	printf("Owner: %p\n", NULL);
else
	printf("Owner: %s\n", d->owner);
}
