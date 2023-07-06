#include "main.h"
#include <stdio.h>
/**
 * factorial - returns the factorial of a number
 *
 * @n: integer input
 *
 * Return: returns a factorial
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);

	else
	return (n * factorial(n - 1));
}
