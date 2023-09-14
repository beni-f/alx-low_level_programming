#include "lists.h"
/**
 * dlistint_len - prints a doubly linked list
 * @h: pointer to the list
 *
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
    const dlistint_t *temp = h;
    int count = 0;
    if (h == NULL)
    {
        return (-1);
    }
    else
    {
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return (count);
    }

}