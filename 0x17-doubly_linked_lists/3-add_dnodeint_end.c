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
    dlistint_t *newnode, *temp;

    newnode = malloc(sizeof(dlistint_t));

    if (newnode == NULL)
        return (NULL);
    
    temp = *head;
    newnode->n = n;
    newnode->next = NULL;

    if (*head == NULL)
    {
        newnode->prev = NULL;
        *head = newnode;
        return (newnode);
    }

    while (temp != NULL && temp->next != NULL)
        temp = temp->next;

    newnode->prev = temp;
    temp->next = newnode;

    return (newnode);
}
