#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - frees a linked list
 * @head: pointer to list
*/
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
