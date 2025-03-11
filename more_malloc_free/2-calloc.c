#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
*_calloc - prototype contenant les chiffres
*@nmemb: variable
*@size: variable a multiplier avec l'autre variable
*Return:value of _calloc
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *kallok;



if (nmemb == 0)
return (NULL);

if (size == 0)
return (NULL);

if (size > 0 && nmemb > (UINT_MAX / size))
{
	return (NULL);
}

kallok = malloc(nmemb * size);

if (kallok == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)

((char *)kallok)[i] = 0;

return (kallok);


}
