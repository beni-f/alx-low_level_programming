#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 *
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: returns the index at which key/value pair should be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value, index;

hash_value = hash_djb2(key);
index = hash_value % size;

return (index);
}
