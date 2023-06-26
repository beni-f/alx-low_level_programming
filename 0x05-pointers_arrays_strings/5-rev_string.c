#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverse a string
 * @s: pointer to character parameter
*/
void rev_string(char *s)
{
	int length, i, j;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
		;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
