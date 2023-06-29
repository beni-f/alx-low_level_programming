#include <stdio.h>
#include "main.h"
/**
 * _strncat - appends n numbers of character to destination string
 * @dest: destination string
 * @src: source string
 * @n: integer parameter
 *
 * Return: returns destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (*dest)
		dest++;

	while (*src && i < n)
	{
		*dest++ = *src++;

		i++;
	}
	return dest;

}

