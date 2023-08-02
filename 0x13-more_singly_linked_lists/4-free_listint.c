#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint - frees memory
 *
 * @head: pointer to a sturcture
*/
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while ((temp = head) != 0)
	{
		head = head->next;
		free(temp);
	}
}
