#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
*print_dog - Initialise une variable de type struct dog
*@d: Pointeur vers la structure dog à initialiser
*Description: Initialise les champs de la structure `dog`
*avec les valeurs fournies.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
	}

	if (d->name == NULL)
	{
	printf("Name: (nil)\n");
	}
	else
	{
	printf("Name: %s\n", d->name);
	}

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
	printf("Owner: (nil)\n");
	}

	else
	{
	printf("Owner: %s\n", d->owner);
	}

}
