#include <stdio.h>
#include "dog.h"

/*
 * init_dog - a function that initialize a variable a type
 *
 * @d: structure dog contains all the basic info
 * @name: first member of the structure
 * @age: second member of the structure
 * @owner: third member of the structure
 *
 * return - nothing.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
