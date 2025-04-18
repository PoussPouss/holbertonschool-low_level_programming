#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* get_dnodeint_at_index - Returns the nth node of a doubly linked list
* @head: Pointer to the head of the list
* @index: Index of the node to return, starting from 0
* Return: Pointer to the node at requested index, or NULL if it doesn't exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}

	return (NULL);


}
