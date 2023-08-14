#include <stdio.h>
#include "dog.h"
/**
 * init_dog - intializes a struct dog
 *
 * @d: struct to initialize
 * @name: name
 * @age: age
 * @owner: owner
 * Return: struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
