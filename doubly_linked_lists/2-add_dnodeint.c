#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Pointer to pointer to the head of the list
 * @n: Value to store in the new node
 * Return: Address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;


	if (head == NULL)
		return (NULL);


	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);


	new->n = n;
	new->prev = NULL;
	new->next = *head;


	if (*head != NULL)
		(*head)->prev = new;


	*head = new;

	return (new);
}
