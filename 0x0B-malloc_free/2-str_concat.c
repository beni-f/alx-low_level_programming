#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *
 * @s2: input
 * @s1: input
 *
 * Return: returns string
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, counter = 0;

	char *a;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	a = malloc(sizeof(char) * ((len1 + 1) + len2));

	for (i = 0; i < len1; i++)
	{
		a[i] = s1[i];
	}

	for (j = len1; j < len1 + len2; j++)
	{
		a[j] = s2[counter];
		counter++;
	}

	a[len2 + len1] = '\0';

	if (a == NULL)
		return (NULL);

	return (a);
}
