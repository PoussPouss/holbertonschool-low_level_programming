#include "main.h"
/**
*puts2 -  prototype
*@str : variable into prototype
*/
void puts2(char *str)
{
	int i;

	if (str[i + 1] == '\0')
	return;

for (i = 0; str[i] != '\0'; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');

}
