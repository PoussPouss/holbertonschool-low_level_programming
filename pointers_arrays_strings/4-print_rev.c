#include "main.h"
/**
*print_rev - calculate the length of a string
*@s : variable into prototype
*Return: the length of the string (excluding the null terminator)
*/

void print_rev(char *s)
{
int length = 0;

	if (s == NULL)
	{
	_putchar('\n');
	return;
	}

	while (s[length] != '\0')
	{
	length++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
	_putchar(s[i]);
	}
_putchar('\n');

}
