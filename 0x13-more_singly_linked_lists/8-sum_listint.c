#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data
 *
 * @head: pointer to a struct
 * Return: returns the sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *hnode;

	hnode = head;

	if (head == NULL)
		return (0);

	while (hnode != 0)
	{
		sum += hnode->n;

		hnode = hnode->next;
	}
	return (sum);
}

