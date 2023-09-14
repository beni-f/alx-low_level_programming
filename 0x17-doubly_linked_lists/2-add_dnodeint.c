#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: double pointer to the list
 * @n: data to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newnode;

    if (!*head)
    {
        return (NULL);
    }
    newnode = (dlistint_t *) malloc(sizeof(dlistint_t));
    if (newnode == NULL)
        return (NULL);

    newnode->n = n;
    newnode->next = *head;
    newnode->prev = 0;

    if (*head)
    {
        (*head)->prev = newnode;
    }
    *head = newnode;

    return (newnode);
}