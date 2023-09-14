#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
typedef struct listint_t{
    size_t n;
    struct listint_t *next;
    struct listint_t *prev;
}dlistint_t;
size_t print_dlistint(const dlistint_t *h);
#endif