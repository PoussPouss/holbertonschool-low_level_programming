#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
int i, x, r;
for (i = 0; i <= 9; i++)
{
_putchar('0');

for (x = 1; x <= 9; x++)
{
_putchar(',');
_putchar(' ');
r = i * x;
if (r <= 9)
_putchar(' ');
else
_putchar((r / 10) + '0');

_putchar((r % 10) + '0');
}
_putchar('\n');
}
}
