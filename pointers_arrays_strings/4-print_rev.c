#include "main.h"
#include <stddef.h>
/**
*print_rev -  prints a string in reverse
*@s : variable into prototype
*Return: void
*/

void print_rev(char *s)
{
int length = 0;
int i;
	if (s == NULL)
	{
	_putchar('\n');
	return;
	}

	while (s[length] != '\0')
	{
	length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
_putchar('\n');

}
