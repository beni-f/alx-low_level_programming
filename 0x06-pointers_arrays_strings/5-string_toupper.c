#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes lowercase letters to uppercase in a string
 *
 * @n: pointer to character parameter
 * Return: returns string
*/
char *string_toupper(char *n)
{
	int i, length;

	for (length = 0; n[length] != '\0'; length++)
		;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}

	return (n);
}
