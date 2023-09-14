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
size_t print_dlistint(const dlistint_t *h);
void free_dlistint(dlistint_t *head);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
#endif