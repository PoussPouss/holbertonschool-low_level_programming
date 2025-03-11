#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - its my prototye
*@b: variable a vérifier avec malloc
*Return: value of mallocchecked
*/
void *malloc_checked(unsigned int b)
{
	void *checked;

	if (b == 0)
	exit(98);
checked = malloc(b);

if (checked == NULL)
exit(98);

return (checked);

}
