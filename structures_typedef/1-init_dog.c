#include "dog.h"
#include <string.h>
/**
* init_dog - Initialise une variable de type struct dog
* @d: Pointeur vers la structure dog à initialiser
* @name: Nom du chien
* @age: Âge du chien
* @owner: Propriétaire du chien
* Description: Initialise les champs de la structure `dog`
* avec les valeurs fournies.
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

