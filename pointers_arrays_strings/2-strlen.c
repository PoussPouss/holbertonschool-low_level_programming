#include "main.h"
#include <string.h>
/**
*_strlen - its my prototype
*@s : variable into prototype
*@length : my variable
*/

int _strlen(char *s)
{

int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}

	return length;
}
