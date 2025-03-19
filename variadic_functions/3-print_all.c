#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Imprime des arguments de différents types
 * @format: Chaîne de caractères indiquant les types d'arguments
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (si la chaîne est NULL, imprime (nil))
 * @...: Liste variable des arguments à imprimer
 *
 * Description: Les arguments sont imprimés selon le format spécifié
 * et séparés par des virgules
 * Return: Void
 */

void print_all(const char * const format, ...)

{
	va_list args;
	int i = 0;

	char *str;

	int first = 1;

	va_start(args, format);

	if (format == NULL)
	return;

	while (format[i])
	{
		if (first == 0)
			printf(", ");

		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			printf("%s", str ? str : "(nil)");
		}

		{
		first = 0;
		}
		i++;
	}
		va_end(args);
		printf("\n");

}
