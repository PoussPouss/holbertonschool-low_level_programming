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

unsigned int i;

unsigned int sum = 0;

va_list args;

	if (n == 0)
	return (0);

	va_start(args, n);

for (i = 0; i < n; i++)

sum += va_arg(args, int);
va_end(args);

return (sum);

}

