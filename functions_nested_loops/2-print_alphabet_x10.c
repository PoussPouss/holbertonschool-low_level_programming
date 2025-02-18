#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
int i;
	for (i = 0; i < 10; i++)
	{
        char c;
        	for (c = 'a'; c <= 'z' + 1; c++)
		{
		_putchar(c <= 'z' ? c : '\n');
        }
		}

}
