#include <stdio.h>
#include "main.h"

void puts_half(char *str)
{
	int index, i;

	for (index = 0; str[index] != '\0'; index++)
		;
	if (index % 2 != 0)
	{
		for (i = (index - 1) / 2; i < index; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = index / 2; i < index; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
