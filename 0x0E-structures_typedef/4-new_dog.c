#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - this returns the length of a string
 * @s: the string to evaluate
 * daniel oluwanimotele
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int d;

	d = 0;

	while (s[d] != '\0')
	{
		d++;
	}

	return (d);
}

/**
 * *_strcpy - this function copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: the pointer to the buffer in which we copy the string
 * @src: the string to be copied
 * daniel was here for alx
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int den, i;

	den = 0;

	while (src[den] != '\0')
	{
		den++;
	}

	for (i = 0; i < den; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * dan
 * Return: the pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int den1, den2;

	den1 = _strlen(name);
	den2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (den1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (den2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
