#include <stdio.h>
#include "main.h"

void more_numbers(void)
{
	int a, b = 0;

	for (a = 0; a <= 14; a++)
	{
		if (b < 10)	
		{
			_putchar(a + '0');

			b++;
		}
		
		_putchar('\n');
	}
} 
