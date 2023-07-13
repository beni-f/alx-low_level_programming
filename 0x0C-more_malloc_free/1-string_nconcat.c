#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two string
 *
 * n: integer input
 * @s2: string input
 * @s1: string input
 *
 * Return: returns string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;

	char *a;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	a = malloc(sizeof(char) * (len1 + len2 + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		a[i] = s1[i];
	}

	if (n >= len2)
	{
		for (j = len1; j < len1 + len2; j++)
		{
			a[j] = s2[j];
		}
	}
	else
	{
		for (j = len1, i = 0; j < len1 + n && i < n; j++, i++)
		{
			a[j] = s2[i];
		}
	}
	a[n + len1] = '\0';
	return (a);
}
