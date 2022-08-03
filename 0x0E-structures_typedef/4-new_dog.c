#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - this function creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;

	d.name = name;
	d.age = age;
	d.owner = owner;
	return (d);
}
