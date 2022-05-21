#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: Dog's age
 * @owner: name of owner
 * Return: dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *my_dog;

	if (!name || !owner)
		return (NULL);
	my_dog = malloc(sizeof(dog_t));
	if (!my_dog)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	my_dog->name = malloc(i * sizeof(char));
	if (!my_dog->name)
	{
		free(my_dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		my_dog->name[j] = name[j];
	my_dog->age = age;
	for (i = 0; owner[i]; i++)
		;
	i++;
	my_dog->owner = malloc(i * sizeof(char));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		my_dog->owner[j] = owner[j];
	return (my_dog);
}
