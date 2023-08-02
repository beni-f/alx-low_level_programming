#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while ((temp = head) != 0)
	{
		head = head->next;
		free(head);
	}
}
