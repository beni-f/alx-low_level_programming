#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
typedef struct node
{
	int n;
	struct node *next;
}listint_t;
listint_t *add_nodeint_end(listint_t **head, const int n);
listint_t *add_nodeint(listint_t **head, const int n);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif
