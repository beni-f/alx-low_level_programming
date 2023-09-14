#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: double pointer to the list
 * @n: data to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *newnode, *tail;

    newnode = malloc(sizeof(dlistint_t));

    if (newnode == NULL)
        return (NULL);
    
    tail = *head;

    if (!head)
    {
        newnode->prev = NULL;
        *head = newnode;
        return (newnode);
    }

    while (tail != NULL)
    {
        tail = tail->next;
    }
    newnode->n = n;
    newnode->next = NULL;
    newnode->prev = tail;
    tail = newnode;

    return (newnode);
}