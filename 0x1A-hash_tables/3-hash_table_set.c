#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long index, size;
	hash_node_t *new_node, *item;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	index = key_index((const char *)key, size);
item = ht->array[index];

	if (item != NULL && strcmp(item->key, key) == 0)
	{
		item->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = item;
	item = new_node;

	return (1);
}
