#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialiaze dog function
 * @d: dog defined structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
