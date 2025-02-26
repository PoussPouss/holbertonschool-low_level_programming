#include "main.h"
/**
 *puts_half - prototype string character
 *@str: pointeurs variable
 */
void puts_half(char *str)

{
int length = 0;
int n;
int i;
while (str[length] != '\0')
{
length++;
}

n = (length + 1) / 2;

for (i = n; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');

}
