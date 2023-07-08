#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks if a character is lowercase or uppercase
 *@c:  integer parameter
 * Return:  returns 0 or 1
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
