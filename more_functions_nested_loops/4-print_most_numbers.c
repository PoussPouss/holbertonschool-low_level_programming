#include "main.h"
#include <stdio.h>

/**
*print_most_numbers - its my protitype
*/
void print_most_numbers(void)
{

char i;

	for (i = 48; i <= 57; i++)
	{

		if (i ==  50 || i == 52)
		continue;
		_putchar(i);
	}
_putchar('\n');

}
