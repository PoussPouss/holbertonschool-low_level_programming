#include "main.h"
/**
*more_numbers - its my prototype
*/

void more_numbers(void)
{
int i, x;

	for (i = 0; i < 10; i++)
	{

		for (x = 0; x <= 14; x++)
		{

			if (x >= 10)
			_putchar('1');
			_putchar((x % 10) + '0');
		}
_putchar('\n');
	}


}
