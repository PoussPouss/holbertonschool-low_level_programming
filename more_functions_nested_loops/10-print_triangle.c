#include "main.h"
/**
*print_triangle - its my prototype
*@size : variable into prototype
*/

void print_triangle(int size)
{
int i = 0;
int j;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

		for (i = 0; i < size; i++)
		{


			for (j = 0; j < (size - i - 1); j++)
			{
			_putchar(' ');
			}

			for (j = 0; j < (i + 1); j++)
			{
			_putchar('#');
			}

_putchar('\n');
		}


}
