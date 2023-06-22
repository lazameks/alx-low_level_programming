#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize variables of type struct dog
 * @d: pointer to struct
 * @name: name to initialize
 * @owner: owner to initialise
 * @age: age to initialise
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d =  malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
