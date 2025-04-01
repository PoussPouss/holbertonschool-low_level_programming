#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_dnodeint_end - ajouter une node a la fin de la liste
* @head: Pointer to pointer to the head of the list
* @n: Value to store in the new node
* Return: Address of the new element, or NULL if it fails
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;


	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}
