#include "main.h"
#include <stdlib.h>
/**
*array_range - prototype
*@min: tableau du prototype
*@max: tableau du prototype
*Return: value de mon pointeur initialisé avec max - min +1
*/

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == 0)
	return (NULL);

	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
