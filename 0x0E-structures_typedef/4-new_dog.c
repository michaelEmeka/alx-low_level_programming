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
	dog_t *d;
	int Ln, Lo, i;

	//allocates memory for d
	d = (dog_t *)malloc(sizeof(dog_t));
	//checks if allocation was successful
	if (d == NULL)
		return (NULL);
	Ln = Lo = 0;
	//get length of name and owner pointers
	while (name[Ln++])
		;
	while (owner[Lo++])
		;
	//allocates memory for name and owner elements
	d->name = malloc(sizeof(d->name) * Ln);
	if (d->name == NULL)
	{
		free (d);
		return (NULL);
	}
	for (i = 0; i <= Ln; i++)
		d->name[i] = name[i];
	d->age = age;
	d->owner = malloc(sizeof(d->owner) * Lo);
	if (d->name == NULL)
	{
		free (d->name);
		free (d);
	}
	for (i = 0; i <= Lo; i++)
		d->owner[i] = owner[i];
	return (d);
}
