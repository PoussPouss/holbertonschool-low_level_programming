#include "main.h"
/**
*print_diagonal - its my prototype
*@n : variable into prototype
*/

void print_diagonal(int n)
{
int i = 0;
int j;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

		while (i < n)
		{

			for (j = 0; j < i; j++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		i++;

		}


}



