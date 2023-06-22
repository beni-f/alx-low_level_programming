#include <stdio.h>
#include "main.h"
/**
 * _isdigit - returns 1 if c is a digit and 0 otherwise
 *@c: integer parameter
 * Return: returns 0 or 1
*/
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
