#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a node at the end
 *
 * @head: pointer to pointer of a structure
 * @str: string input
 *
 * Return: address of the newly added node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;

	list_t *new, *temp = 0;

	if (str == NULL)
		return (NULL);

	new = (struct node *)malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[len] != '\0')
		len++;
	new->len = len;

	new->next = NULL;

	temp = *head;

	if (*head == NULL)
	{
		*head = new;
		return (new);
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
