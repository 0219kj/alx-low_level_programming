#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

#ifndef INIT_DOG_H
#define INIT_DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog)); 
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
