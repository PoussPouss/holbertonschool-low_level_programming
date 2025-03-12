
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* _strlen - Retourne la longueur d'une chaîne.
* @s: Pointeur vers la chaîne à mesurer.
* Return: La longueur de la chaîne.
*/
int _strlen(char *s)
{
	int c = 0;

	while (*s++)
		c++;

	return (c);
}

/**
* _strcpy - Copie une chaîne de caractères.
* @src: Chaîne source.
* @dest: Destination.
* Return: Pointeur vers la chaîne copiée.
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
* new_dog - Crée un nouveau chien et alloue de la mémoire.
* @name: Nom du chien.
* @age: Âge du chien.
* @owner: Nom du propriétaire.
* Return: Pointeur vers une nouvelle structure dogt ou NULL en cas d'échec.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_instance;

	new_dog_instance = malloc(sizeof(dog_t));
	if (new_dog_instance == NULL)
		return (NULL);


	new_dog_instance->name = malloc(_strlen(name) + 1);
	if (new_dog_instance->name == NULL)
	{
		free(new_dog_instance);
		return (NULL);
	}


	new_dog_instance->owner = malloc(_strlen(owner) + 1);
	if (new_dog_instance->owner == NULL)
	{
		free(new_dog_instance->name);
		free(new_dog_instance);
		return (NULL);
	}


	_strcpy(new_dog_instance->name, name);
	_strcpy(new_dog_instance->owner, owner);
	new_dog_instance->age = age;

	return (new_dog_instance);
}
