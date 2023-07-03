#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 *
 * @s: string to be encoded
 * @c : character parameter
 *
 * Return: returns string
*/
char *_strchr(char *s, char c)
{
	int i, length = 0;

	for (length = 0; s[length] != '\0'; length++)
		;

	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
		{

			return (&s[i]);
		}
	}
	return (0);
}

