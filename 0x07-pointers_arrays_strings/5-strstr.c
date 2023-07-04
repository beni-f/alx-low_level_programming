#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 *
 * @needle: the string to be located
 * @haystack: the initial string
 *
 * Return: returns encoded string
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
				return (&haystack[j]);
		}
	}
	return (0);
}
