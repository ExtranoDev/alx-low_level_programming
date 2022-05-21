#ifndef DOGSTRUCT
#define DOGSTRUCT

/**
 * struct dog - dog data
 * @name: dog's name
 * @owner: the owner
 * @age: dog's age
 * Description: a struct with dog name, age, and owner's name
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
