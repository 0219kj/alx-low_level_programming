#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct Dog new_dog;

	new_dog = d;
	new_dog.name = name;
	new_dog.age = age;
	new_dog.owner = owner;
}
