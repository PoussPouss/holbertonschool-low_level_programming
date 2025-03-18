#include <stddef.h>
#include "function_pointers.h"
/**
* print_name - Applique une fonction à un nom donné
* @name: Pointeur vers le nom à afficher
* @f: Pointeur vers la fonction qui affiche le nom
* Description: Cette fonction prend un pointeur vers une fonction
* qui accepte une chaîne de caractères et l'exécute si elle est valide.
*/

void print_name(char *name, void (*f)(char *))
{
	if ((f != NULL) && (name != NULL))
	{
		f(name);
	}



}
