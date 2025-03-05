#include "main.h"
/**
*_strlen_recursion - its my recursion
*@s: pointeur vers la chaine de caractère
*Return: value nombre de caractères
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')

	return (0);

	else

return (1 + _strlen_recursion(s + 1));

}
