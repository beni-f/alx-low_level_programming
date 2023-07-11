#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - Main Entry
 * @a: input
 * @height: input
 */
void ch_free_grid(char **a, unsigned int height)
{
	if (a != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(a[height]);
		free(a[height]);
		free(a);
	}
}
/**
 * strtow - Main Entry
 * @str: input string
 * Return: 0
 */
char **strtow(char *str)
{
	char **aout;
	unsigned int c, height, i, j, a;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	aout = malloc((height + 1) * sizeof(char *));
	if (aout == NULL || height == 0)
	{
		free(aout);
		return (NULL);
	}
	for (i = a = 0; i < height; i++)
	{
		for (c = a; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[i] = malloc((c - a + 2) * sizeof(char));
				if (aout[i] == NULL)
				{
					ch_free_grid(aout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a <= c; a++, j++)
			aout[i][j] = str[a];
		aout[i][j] = '\0';
	}
	aout[i] = NULL;
	return (aout);
}
