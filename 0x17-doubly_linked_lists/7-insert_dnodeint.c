#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *temp = *h, *newnode;
    unsigned int i = 0;
    if (!h)
        return (NULL);
    newnode = malloc(sizeof(dlistint_t));
    if (!newnode)
        return (NULL);
    newnode->n = n;
    while (temp != NULL && i < idx - 1)
    {
        temp = temp->next;
        i++;
    } 
    if (!temp)
        return (NULL);

    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next->prev =newnode;
    temp->next = newnode;

    return (newnode);
}
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}