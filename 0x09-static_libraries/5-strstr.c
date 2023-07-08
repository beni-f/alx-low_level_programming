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
	int i, j, length, counter = 0;
	
	for (length = 0; needle[length] != '\0'; length++)

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				counter++;
				break;
			}
			if (length == counter)
				return (&haystack[j]);
		}
	}
	return (0);
}
