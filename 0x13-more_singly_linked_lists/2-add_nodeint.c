#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - adds a new node
 *
 * @head: pointer to a pointer to structure
 * @n: integer input
 *
 * Return: address of the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->next = *head;

		new->n = n;

		*head = new;
	}
	return (new);
}
