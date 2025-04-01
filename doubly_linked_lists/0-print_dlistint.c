#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int count = 0;

if (h == NULL)
return (0);

while (h != NULL)
{

	printf("%d\n", h->n);
	h = h->next;
	count++;


}
return (count);
}
