#include <stdio.h>
#include "main.h"

void more_numbers(void)
{
	int a, b = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)	
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');

				_putchar(b % 10 + '0');
			}
			else
				_putchar(b + '0');		
		}
		
		_putchar('\n');
	}
} 
