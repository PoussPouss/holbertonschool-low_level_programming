#include "main.h"

/**
*factorial - its my recursion
*@n: pointeur vers la chaine de caractère
*Return: value si c'est inferieur ou = à 0
*/

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}

	else if (n == 0)
	{
	return (1);
	}

	else
	{
	return (n * factorial(n - 1));
	}

}


