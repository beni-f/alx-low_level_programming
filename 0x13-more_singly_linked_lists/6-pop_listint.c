#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head of the list
 * @head: pointer to pointer to a stuct
 * Return: returns 0
*/
int pop_listint(listint_t **head)
{
	int x;

	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	x = temp->n;

	*head = temp->next;

	free(temp);

	return (x);
}
