#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{	
	size_t n = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
	
