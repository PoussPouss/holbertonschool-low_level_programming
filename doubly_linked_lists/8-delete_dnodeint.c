#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Supprime un nœud à l'index spécifié
 * @head: Double pointeur vers la tête de la liste
 * @index: Index du nœud à supprimer (commence à 0)
 *
 * Description: Cette fonction supprime le nœud à l'index spécifié
 * dans une liste doublement chaînée.
 *
 * Return: 1 en cas de succès, -1 en cas d'échec
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;


	if (current == NULL)
		return (-1);


	if (current->prev != NULL)
		current->prev->next = current->next;


	if (current->next != NULL)
		current->next->prev = current->prev;


	free(current);
	return (1);
}
