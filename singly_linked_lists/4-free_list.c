#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void free_list(list_t *head)
{
	list_t *tmp;


if (head == NULL)
return;

while (head != NULL)
{
tmp = head->next;
free(head);
head = tmp;
}

}
