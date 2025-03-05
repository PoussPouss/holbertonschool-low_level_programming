#include "main.h"
/**
*_sqrt_helper - prototype contenant les variables n et i
*@n: variable du prototype
*@i: ma variable
*Return: value de n et de i * i
*/
int _sqrt_helper(int n, int i)
{
	if (n < 0)
		return (-1);

	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (_sqrt_helper(n, i + 1));
}

/**
*_sqrt_recursion - nouveau prototype , j'ai pas encore compris ce que c'est
*@n: variable contenant plein de choses dans le prototype
*Return: value du nouveau prototype
*/
int _sqrt_recursion(int n)

{
return (_sqrt_helper(n, 1));
}
