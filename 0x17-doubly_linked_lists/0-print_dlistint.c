#include "lists.h"
/**
 * print_dlistint - list all elements in the list
 * h: struct input
 * Return: returns number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
    int count = 0;
    const dlistint_t *temp = h;
    if (h == NULL)
    {
        return (-1);
    }
    else
    {
        while(temp != NULL)
        {
            printf("%lu\n", temp->n);
            temp = temp->next;
            count++;
        }
    }
}