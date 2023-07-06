#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - strlen function using recursion
 *
 * @s : string input
 *
 * Return: returns the length of a string
*/
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
		return (i - 1);

	else
		return (i + _strlen_recursion(s + 1));
}
