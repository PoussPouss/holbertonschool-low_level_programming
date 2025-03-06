#include "main.h"
/**
*_print_rev_recursion - its my recursion
*@s: pointeur vers la chaine de caractère
*/
void _print_rev_recursion(char *s)

{
	if (*s == '\0')
	{
	return;
	}
_print_rev_recursion(s + 1);
_putchar(*s);

}




