#include "lists.h"
/**
 * print_dlistint - list all elements in the list
 * h: struct input
 * Return: returns number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
    int count = 0;

    if (h == NULL)
    {
        return (0);
    }

    while(h->next != NULL)
    {
        printf("%lu\n", h->n);
        h = h->next;
        count++;
    }
    return (count);
}