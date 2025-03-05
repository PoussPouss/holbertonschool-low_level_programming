#include "main.h"
/**
*_puts_recursion - its my recursion
*@s: pointeur vers la chaine de caractère
*/

void _puts_recursion(char *s)

{

if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar(*s);
_puts_recursion(s + 1);
}
