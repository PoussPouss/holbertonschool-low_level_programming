#include "main.h"
#include <string.h>
/**
*_puts - write string characters
*@str : variable into prototype
*Return:
*/

void _puts(char *str)
{
int length = 0;

if (str == NULL)
return;


while (str[length] != '\0')
	{
	_putchar(str[length]);
	length++;
	}
_putchar('\n');

}

