#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitilize the beginning of every word
 *
 * @n: pointer to character parameter
 * Return: returns string
*/
char *cap_string(char *n)
{
	int length, i, j, length2;

	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 10, 9};

	for (length = 0; n[length] != '\0'; length++)
		;

	for (length2 = 0; c[length2] != '\0'; length2++)
		;

	for (i = 0; i < length; i++)
	{
		for (j = 0; j < length2; j++)
		{
			if (n[i] == c[j])
			{
				if (n[i + 1] >= 97 && n[i + 1] <= 122)
				{
					n[i + 1] = n[i + 1] - 32;
				}
			}
		}
	}
	return (n);
}
