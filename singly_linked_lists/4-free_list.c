#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a linked list and its nodes
 * @head: pointer to the head of the linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;



while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp->str);
free(tmp);
}

}
