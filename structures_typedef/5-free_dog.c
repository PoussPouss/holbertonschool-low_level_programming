#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_dog - c'est le prototype contenant les chaines de caractères a libérer
*@d: le pointeur de tout le contenant du chien
*/

void free_dog(dog_t *d)
{

	if (d == NULL)
	return;

	if (d->name)
	free(d->name);

	if (d->owner)
	free(d->owner);

	free(d);

}

