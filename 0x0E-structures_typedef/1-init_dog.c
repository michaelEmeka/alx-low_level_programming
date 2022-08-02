#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - this function initializes the struct dog
 * struct dog *d - an instance of dog structure
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = *name;
	d -> age = age;
	d -> owner = *owner;
}
