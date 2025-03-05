#include "main.h"
/**
* is_prime_number - Aide à déterminer si un nombre est premier.
* @n: Le nombre à vérifier.
* Return: 1 si le nombre est premier, 0 sinon.
*/
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (helper_prime(n, 2));
}
/**
 * helper_prime - Aide à déterminer si un nombre est premier.
 * @n: Le nombre à vérifier.
 * @i: Le diviseur actuel à vérifier.
 *
 * Return: 1 si le nombre est premier, 0 sinon.
 */
int helper_prime(int n, int i)
{
	if (i * i > n)
	return (1);
	if (n % i == 0)
	return (0);
	return (helper_prime(n, i + 1));
}
