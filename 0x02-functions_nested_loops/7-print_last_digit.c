#include <stdio.h>
#include "main.h"

int print_last_digit(int n)
{
	int a;
	if (n >= 0)
	{
		a = n % 10;
		
		return (a);
	}
		
	if (n < 0)
	{
		
		n = -n;

		a = n % 10;

		return (a);
	}
	return (1);
}
