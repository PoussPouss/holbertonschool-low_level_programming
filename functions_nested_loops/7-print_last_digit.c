#include "main.h"

/**
*print_last_digit - checks lowercase character
*@n: is the character to return 1 if lowercase
*Return: 1 if c is lowercase, 0 otherwise
*/
int print_last_digit(int n)
{

n = n % 10;
	if (n < 0)
	{
	n = n * -1;
	}
_putchar (n + '0');

return (n);
}

