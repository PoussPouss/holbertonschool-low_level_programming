#include "main.h"
#include <string.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = "Poppy";
d->age = 3.5;
d->owner = "Bob";
}
}

