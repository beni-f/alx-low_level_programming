#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks if a number is positive, negative or zero
 *@n: integer parameter 
 * Return: returns 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');

		putchar('\n');

		return (1);
	}
	else if (n < 0)
	{
		putchar('-');

		putchar('\n');
			
		return (-1);
	}
	else
	{
		putchar('0');

		putchar('\n');

		return (0);
	}

}
