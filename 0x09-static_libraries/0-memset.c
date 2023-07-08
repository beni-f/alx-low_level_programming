#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with constant byte
 *
 * @s: string to be encoded
 * @b: character parameter
 * @n: integer parameter
 *
 * Return: return string
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
