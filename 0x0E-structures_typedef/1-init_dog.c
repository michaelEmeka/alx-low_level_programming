#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - this function initializes the struct dog
 * @d - a pointer to an instance of the dog structure
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
