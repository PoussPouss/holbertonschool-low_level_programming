#include "main.h"
/**
*_pow_recursion - my recursion
*@x: pointeur vers la chaine de caractère
*@y: multiplicateur de x
*Return: value si c'est inferieur ou = à 0
*/


int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	else if (y == 0)
	return (1);

	else
	return (x * _pow_recursion(x, y - 1));
}
