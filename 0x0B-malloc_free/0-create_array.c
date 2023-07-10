#include "main.h"
#include <stdlib.h>
/**
 * create_array - Main Entry
 * @size: input
 * @c: input
 *
 * Return: returns string
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
