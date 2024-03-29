#ifndef _FILE_DOG_H
#define _FILE_DOG_H

/**
 * struct dog - Describes a dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif /* #ifndef dog */
