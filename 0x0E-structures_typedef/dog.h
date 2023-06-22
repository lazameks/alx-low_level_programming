#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defining a dog struct
 * @name: name char
 * @age: age
 * @owner: owner char
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
