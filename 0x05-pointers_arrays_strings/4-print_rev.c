#include <stdio.h>
#include "main.h"
/**
 * print_rev - print a string in reverse order
 * @s: pointer to character parameter
*/
void print_rev(char *s)
{
	int index = 0;

	for (index = 0; s[index] != '\0'; index++)
		;

	for (--index; index >= 0; --index)
		_putchar(s[index]);

	_putchar('\n');
}
