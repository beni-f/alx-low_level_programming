#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copies n numbers of character from the src to the dest
 * @src: source string
 * @dest: destination string
 * @n: integer parameter
 *
 * Return: returns destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}



