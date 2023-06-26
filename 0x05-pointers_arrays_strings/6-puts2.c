#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other string
 * @str: pointer to character parameter
*/
void puts2(char *str)
{
	int index, i;

	for (index = 0; str[index] != '\0'; index++)
		;

	for (i = 0; i < index; i++)
	{
		if (i == 0 || i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
