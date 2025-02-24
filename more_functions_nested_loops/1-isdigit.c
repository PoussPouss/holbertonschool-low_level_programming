#include "main.h"
#include <ctype.h>
/**
*_isdigit - checks digit character
*@c: is the character to return 1 if digit
*Return: 0 if c is lowercase
*/

int _isdigit(int c)

{

	if (c >= 48 && c <= 57)
	{
	return (1);
	}

	else
	{
	return (0);
	}

}
