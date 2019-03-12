#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that frees dogs
 *
 * @d: structure for dogs
 *
 * return - nothing.
**/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
