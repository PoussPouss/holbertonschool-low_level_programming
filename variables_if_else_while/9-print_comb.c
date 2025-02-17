#include <stdio.h>
/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: Always (Success)
 */
int main(void)
{
int number = 0;
	while (number < 10)
	{
	putchar(number + '0');
		if (number < 9)
	{
		putchar(',');
		putchar(' ');
		}
		number++;
		}
putchar('\n');
return (0);
}
