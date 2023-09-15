#include "lists.h"
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp = *head;
    unsigned int i = 0;
    if (!head || !*head)
        return (-1);
    if (index == 0)
    {
        *head = (*head)->next;
        if (*head)
					(*head)->prev = NULL;
        free(temp);
    }
    else
    {
        while (temp != NULL && i < index)
        {
            temp = temp->next;
            i++;
        }
        if (!temp)
            return (-1);
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        free(temp);
    }
    return(1);
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
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    return (0);
}