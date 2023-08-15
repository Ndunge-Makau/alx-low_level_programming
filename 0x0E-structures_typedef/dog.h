#ifndef _FILE_DOG_H
#define _FILE_DOG_H

/**
 * struct dog - Describes a dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* #ifndef dog */

void init_dog(struct dog *d, char *name, float age, char *owner);
