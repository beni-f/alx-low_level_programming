#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert node at index
 *
 * @head: pointer to pointer to a sturct
 * @idx: index of the node
 * @n: integer input
 *
 * Return: returns the address of the inserted node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	listint_t *newnode, *temp;

	temp = *head;

	newnode = malloc(sizeof(listint_t));

	if (temp == NULL && idx != 0)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		while (temp->next != 0 && count < idx - 1)
		{
			temp = temp->next;

			count++;
		}
		newnode->next = temp->next;

		temp->next = newnode;
	}
	return (newnode);
}
