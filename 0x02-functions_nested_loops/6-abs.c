#include <stdio.h>
#include "main.h"
/**
 * _abs - prints the absolute value of a number
 *@n: integer parameter
 * Return: returns n
*/
int _abs(int n)
{
	if (n > 0)
	{
		n = n * 1;
		return (n);
	}
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
