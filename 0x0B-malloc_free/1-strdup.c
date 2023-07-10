#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - MAIN entry
 *
 * @str: input
 *
 * Return: returns string
*/
char *_strdup(char *str)
{
	int i, length;

	char *a;

	for (length = 0; str[length] != '\0'; length++)
		;

	if (str == NULL)
		return (NULL);

	a = malloc(sizeof(char) * length + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		a[i] = str[i];

	a[length] = '\0';

	return (a);
}


