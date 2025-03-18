#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Calcule la somme de tous ses paramètres
 * @n: Nombre de paramètres
 * @...: Liste variable de paramètres à additionner
 *
 * Return: Somme de tous les paramètres, 0 si n est égal à 0
 */

int sum_them_all(const unsigned int n, ...)
{

va_list args;

unsigned int i;

unsigned int sum = 0;



	if (n == 0)
	return (0);

	va_start(args, n);

for (i = 0; i < n; i++)
{
	sum += va_arg(args, int);
}

return (sum);
va_end(args);
}


