#include "main.h"
/**
*print_square - its my prototype
*@size : variable into prototype
*/
void print_square(int size)
{

int a = 0;
int b;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	while (a < size)
	{

		for (b = 0; b < size; b++)
		{
		_putchar('#');
		}

	_putchar('\n');
	a++;

	}

}

