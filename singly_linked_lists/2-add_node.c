#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* add_node - Adds a new node at the beginning of a list_t list
* @head: Pointer to a pointer to the head of the linked list
* @str: String to be duplicated and added to the new node
*
* Description: This function creates a new node with the given string,
* duplicates the string, and adds the node at the beginning of the list.
*
* Return: The address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	int length = 0;

	list_t *new = malloc(sizeof(list_t));

	if (head == NULL || new == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[length] != '\0')
	length++;

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = length;
	new->next = *head;
	*head = new;

	return (new);


}
