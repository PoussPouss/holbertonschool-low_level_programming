#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_char - imprime un caractère.
*@args: Liste des arguments variadiques
*/

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
*print_int - imprime un entier.
*@args: Liste des arguments variadiques
*/

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
* print_float - imprime un nombre à virgule flottante.
* @args: Liste des arguments variadiques
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
* print_string - imprime une chaîne de caractères.
* @args: Liste des arguments variadiques
*/
void print_string(va_list args)
{
	char *str = va_arg(args, char*);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
* struct print_func - Structure defining a function based on format character
* @type: The format character
* @print_func: The function to call for printing
*/
typedef struct print_func
{
	char type;

	void (*print_func)(va_list);
} print_func_t;

/**
* print_all - prints anything based on format
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	int first = 1;
	print_func_t print_funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == print_funcs[j].type)
			{
				if (first == 0)
					printf(", ");
				first = 0;
				print_funcs[j].print_func(args);
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
