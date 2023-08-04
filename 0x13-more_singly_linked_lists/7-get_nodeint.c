#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 * @head: pointer to a sturct
 * @index: the index of the node
 *
 * Return: the address of the nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *hnode;

	if (head == NULL)
		return (NULL);

	hnode = head;

	while (hnode->next != 0 && count < index)
	{
		hnode = hnode->next;

		count++;
	}
	return (hnode);
}
