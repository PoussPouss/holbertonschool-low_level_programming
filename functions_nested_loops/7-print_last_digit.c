#include "main.h"

/**
*print_last_digit - checks lowercase character
*@n: is the character to return 1 if lowercase
*Return: 1 if c is lowercase, 0 otherwise
*/
int print_last_digit(int n)
{
	if (n > 0)
	{
	return (n % 10);
	}

	else if (n < 0)
	{
	return (-n % 10);
	}

	else
	return (0);
}

