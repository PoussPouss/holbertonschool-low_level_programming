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
char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
			continue;
	putchar(alphabet);
	}

	putchar ('\n');
return (0);
}
