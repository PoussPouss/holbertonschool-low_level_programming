#include "main.h"
#include <string.h>
/**
*_strlen - calculate the length of a string
*@s : variable into prototype
*Return: the length of the string (excluding the null terminator)
*/

int _strlen(char *s)
{

int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}

return (length);

}
