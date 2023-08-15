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
 * *_strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
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

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	New_dog = malloc(sizeof(dog_t));

	if (New_dog == NULL)
	{
		free(New_dog);
		return (NULL);
	}

	New_dog->name = malloc((_strlen(name)) * sizeof(New_dog->name));
	if (New_dog->name == NULL)
	{
		free(New_dog);
		free(New_dog->name);
		return (NULL);
	}
	New_dog->owner = malloc((_strlen(owner)) * sizeof(New_dog->owner));
	if (New_dog->owner == NULL)
	{
		free(New_dog);
		free(New_dog->owner);
		return (NULL);
	}
	New_dog->name = _strcpy(New_dog->name, name);
	New_dog->age = age;
	New_dog->owner = _strcpy(New_dog->owner, owner);
	return (New_dog);
}
