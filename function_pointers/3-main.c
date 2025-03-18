#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Programme qui effectue des opérations arithmétiques simples
* @argc: Nombre d'arguments passés au programme
* @argv: Tableau des arguments (chaînes de caractères)
*
* Description: Ce programme effectue une opération mathématique entre deux
* nombres entiers selon l'opérateur fourni. Les opérateurs valides sont:
* +, -, *, / et %. Il vérifie également les erreurs comme un nombre
* incorrect d'arguments, un opérateur invalide ou une division par zéro.
*
* Return: 0 en cas de succès, ou un code d'erreur:
*         98 si nombre d'arguments incorrect
*         99 si opérateur invalide
*         100 si division/modulo par zéro
*/
int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(num1, num2));
	return (0);
}
