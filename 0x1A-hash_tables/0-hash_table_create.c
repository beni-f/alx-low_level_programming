#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * 
 * Return: returns a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i = 0;
    hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));
    table->size = size;
    table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

    for (i = 0; i < table->size; i++)
    {
        table->array[i] = NULL;
    }

    return (table);
}
