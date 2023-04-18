#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - function that frees dogs.
 * @d: dog_t d
 * Return: nothing
 */


void free_dog(dog_t *d)
{
if (d == NULL)
{
return;
}
if (d->name != NULL)
{
free(d->name);
}
if (d->owner != NULL)
{
free(d->owner);
}
d->name = NULL;
d->owner = NULL;
free(d);
}
