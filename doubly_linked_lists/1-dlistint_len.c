#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
int count = 0;

if (h == NULL)
return (0);

while (h != NULL)
{
	h = h->next;
	count++;


}
return (count);
}
