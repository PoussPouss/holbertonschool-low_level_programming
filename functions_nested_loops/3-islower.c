#include "main.h"

/**
*_islower - checks lowercase character
*@c: is the character to return 1 if lowercase
*Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
