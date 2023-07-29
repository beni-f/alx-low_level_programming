#ifndef MAIN_H
#define MAIN_H
typedef struct node
{
	char *str;
	unsigned int len;
	struct node *next;
}list_t;
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
#endif
