#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - Calcule la somme des valeurs n de tous les nœuds d'une liste
 * @head: Pointeur vers la tête de la liste doublement chaînée
 *
 * Description: Cette fonction parcourt une liste doublement chaînée et
 * additionne toutes les valeurs n des nœuds.
 *
 * Return: Somme des valeurs, ou 0 si la liste est vide
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *current = head;

	if (head == NULL)
	return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
