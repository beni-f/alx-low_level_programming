#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - adds a new node at the end
 *
 * @head: pointer to pointer to a structure
 * @n: integer input
 *
 * Return: address of the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;

	new->n = n;

	temp = *head;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != 0)
		{
			temp = temp->next;
		}

		temp->next = new;
	}
	return (new);
}
