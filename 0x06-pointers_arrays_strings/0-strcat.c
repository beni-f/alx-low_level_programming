#include <stdio.h>
#include "main.h"
/**
 * _strcat - returns a string that is appended
 *
 * @dest: string that will be appended in this function
 * @src: string that appends its content to dest
 *
 * Return: returns string
*/
char *_strcat(char *dest, char *src)
{
	int length1, length2, i;

	for (length1 = 0; *src < '\0'; length1++)
		;
	for (length2 = 0; *dest < '\0'; length2++)
		;
	for (i = 0; i < length1; i++)
	{
		dest[length2 + i] = src[i];
	}
	_putchar('\n');

	return (dest);
}
