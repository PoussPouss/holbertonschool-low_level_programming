#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - Creates an array of chars and initializes it with a char
*@width: The size of the array
*@height: Size of second array
* Return: Pointer to the array, or NULL if it fails
*/
int **alloc_grid(int width, int height)
{
int **alloc;
int i;
int j;

	if (width <= 0)
	return (NULL);

	if (height <= 0)
	return (NULL);

alloc = malloc (height * sizeof(int *));

	if (alloc == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	alloc[i] = malloc(width * sizeof(int));

	if (alloc[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
			free(alloc[j]);
		}

		free(alloc);
		return (NULL);
	}

}

for (i = 0; i < height; i++)
{
	for (j = 0; j < width; j++)
	{
	alloc[i][j] = 0;
	}
}
return (alloc);
}
