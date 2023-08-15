#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to be checked
 * Return: length of string
 */

int _strlen(char *s)
{
	int count = 0, i = 0;

	while (s[i])
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * *new_dog - creates new dog vairable
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: NULL if fails, otherwise new struct variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *New_dog;

	New_dog = malloc(sizeof(dog_t));

	if (New_dog == NULL)
		return (NULL);

	New_dog->name = malloc(_strlen(name) * sizeof(New_dog->name));
	if (New_dog->name == NULL)
		return (NULL);
	New_dog->owner = malloc(_strlen(owner) * sizeof(New_dog->owner));
	if (New_dog->owner == NULL)
		return (NULL);
	New_dog->name = name;
	New_dog->age = age;
	New_dog->owner = owner;
	return (New_dog);
}
