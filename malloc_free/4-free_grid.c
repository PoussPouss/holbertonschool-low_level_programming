#include "main.h"
#include <stdlib.h>
/**
*free_grid - Creates an array of chars and initializes it with a char
*@grid: The size of the array
*@height: Size of second array
* Return: Pointer to the array, or NULL if it fails
*/

void free_grid(int **grid, int height)
{
int i;

if (grid == NULL)
return;

for (i = 0; i < height; i++)

free(grid[i]);

free(grid);


}

