#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _atoi - converts string to integers
 * @s: pointer to character parameter
 *
 * Return: returns the converted string
*/
int _atoi(char *s)
{
	unsigned int i = 0, length = 0, num = 0, sign = 1;

	for (length = 0; s[length] != '\0'; length++)
		;
	for (i = 0; i < length; i++)
	{
		if (s[i] == '-')
			sign = sign * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
		}
	}
	return (num * sign);
}
