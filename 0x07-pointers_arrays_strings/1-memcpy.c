#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area
 *
 * @n: integer parameter
 * @src: source string
 * @dest: destination string
 *
 * Return: returns encoded string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
