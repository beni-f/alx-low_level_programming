#include <stdio.h>
#include "lists.h"
/**
 * list_len - number of elements in a linked list_t list
 * @h: pointer to structure
 *
 * Return: returns the number of elements
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != 0)
	{
		n++;
		h = h->next;
	}
	return (n);
}
