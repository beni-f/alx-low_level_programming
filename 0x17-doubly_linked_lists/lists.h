#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
typedef struct listint_t{
    size_t n;
    struct listint_t *next;
    struct listint_t *prev;
}dlistint_t;
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int sum_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
size_t print_dlistint(const dlistint_t *h);
void free_dlistint(dlistint_t *head);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
#endif