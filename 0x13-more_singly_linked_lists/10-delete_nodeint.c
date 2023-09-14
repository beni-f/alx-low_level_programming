#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *temp, *prevnode;
	
	temp = *head;

	prevnode = malloc(sizeof(listint_t));
	
	if (temp == 0 || (temp->next == NULL && index != 0))
		return (-1);

	if (index != 0)
	{
		while (temp->next != 0 && count < index)
		{
			prevnode = temp;
			
			temp = temp->next;
	
			count++;
		}
		
		prevnode->next = temp->next;

		free(temp);
	}
	else
	{
		free(temp);
		*head = temp->next;
	}
	return (1);
}
