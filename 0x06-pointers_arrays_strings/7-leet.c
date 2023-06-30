#include "main.h"
#include <stdio.h>
/**
 * leet - encodes a string into 1337
 *
 * @str: pointer to character parameter
 * Return: returns string
*/
char *leet(char *str)
{
	int i, j;

	char c[] = "aAeEoOtTlL";

	char n[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
				str[i] = n[j];
		}
	}
	return (str);
}
