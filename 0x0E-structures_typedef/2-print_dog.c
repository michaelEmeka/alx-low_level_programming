#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - this function prints dog d
 * @d: a pointer to an instance of struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", "(nil)");
		if (d->age != NULL)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %s\n", "(nil)");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %s\n", "(nil)");
	}
}
