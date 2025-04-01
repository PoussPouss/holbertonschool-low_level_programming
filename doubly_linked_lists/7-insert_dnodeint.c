#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Insère un nouveau nœud à une position donnée
 * @h: Pointeur vers le pointeur de la tête de la liste
 * @idx: Index de la position où insérer le nouveau nœud (commence à 0)
 * @n: Valeur à stocker dans le nouveau nœud
 * Return: Adresse du nouveau nœud, ou NULL si l'opération a échoué
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	unsigned int i;

	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;

		if (*h != NULL)
		(*h)->prev = new;
	*h = new;
	return (new);
	}

	for (i = 0; current != NULL && i < idx; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = current;
	new->prev = current->prev;

	if (current->prev != NULL)
	current->prev->next = new;
current->prev = new;

return (new);
}
