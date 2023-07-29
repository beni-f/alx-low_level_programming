#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to a list
 * @str: string input
 *
 * Return: returns the address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;

	list_t *new;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new = (struct node *) malloc(sizeof(list_t));

	new->len = len;
	new->str = strdup(str);
	new->next = *head;

	*head = new;
	return (*head);
}
