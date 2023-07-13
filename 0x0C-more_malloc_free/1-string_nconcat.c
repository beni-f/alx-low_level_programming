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
	unsigned int i, len1, len2;

	char *a;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
			;
	}
	
	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
			;
	}

	a = malloc(sizeof(char) * (len1 + len2 + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		a[i] = s1[i];
	}

	if (n >= len2)
	{
		for (i = 0; i < len2; i++)
		{
			a[i + len1] = s2[i];
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			a[i + len1] = s2[i];
		}
	}
	a[len1 + len2] = '\0';
	return (a);
}
