#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
int main(void)
{
int x;
char alphabet;

	for (x = 0; x < 10; x++)
	{
	putchar(x + '0');
	}
	for (alphabet = 'a'; alphabet < 'g'; alphabet++)
	{
	putchar(alphabet);
	}
putchar('\n');
return (0);
}
