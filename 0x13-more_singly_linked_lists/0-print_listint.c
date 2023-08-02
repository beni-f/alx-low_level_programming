#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: pointer to a structure
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != 0)
	{
		printf("%i\n", h->n);

		h = h->next;

		count++;
	}

	return (count);
}
