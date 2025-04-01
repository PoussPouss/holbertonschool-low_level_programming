#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* free_dlistint - frees a linked list and its nodes
* @head: pointer to the head of the linked list
*
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
	    head = head->next;
	    free(tmp);
	}

}
