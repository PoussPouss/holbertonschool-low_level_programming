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
	dlistint_t *current, *new_node;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (h == NULL)
		return (NULL);

	current = *h;
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
