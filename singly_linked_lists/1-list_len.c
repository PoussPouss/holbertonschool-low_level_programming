#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)

{
	int count = 0;

	if (h == NULL)
	return (0);

	while (h != NULL)
	{
	count++;
	h = h->next;
	}

	return (count);

}
