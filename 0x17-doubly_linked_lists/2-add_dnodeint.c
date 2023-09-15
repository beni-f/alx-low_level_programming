#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of the list
 * 
 * @head: head of the list
 * @n: integer input
 * 
 * Return: address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newnode;

    if (!head)
        return (NULL);

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
