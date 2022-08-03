#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * void free_dog(dog_t *d);
 * free_dog - this function frees dog
 * @d: this is an instance of a dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(*d);
}
