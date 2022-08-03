#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - this function frees dog
 * @d: this is an instance of a dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	else
	{
	}
}
