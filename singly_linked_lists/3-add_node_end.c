#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*add_node_end - ajouter un nouveau noeu a la fin de list_t
*@head: la liste
*@str: chaine de caractère dans node
*Return: l'adresse du nouvel element ou NULL si fail
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int length = 0;

	list_t *new = malloc(sizeof(list_t));
	list_t *lastnode = *head;

	if (new == NULL)
		return (NULL);

	while  (str[length] != '\0')
	length++;

	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

		else
		{
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = new;

		}

		return (new);
	}
