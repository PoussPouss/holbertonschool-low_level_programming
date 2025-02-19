#include "main.h"

/**
*print_sign - checks lowercase character
*@n: is the character to return 1 if lowercase
*Return: 1 if c is lowercase, 0 otherwise
*/
int print_sign(int n)
{

	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
