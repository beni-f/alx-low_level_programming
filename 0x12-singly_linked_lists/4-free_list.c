#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
void free_list(list_t *head)
{
	list_t *new;
	
	while((new = head) != NULL)
	{
		free(new->str);
		free(new);
	}
}
