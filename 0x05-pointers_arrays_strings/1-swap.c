#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: pointer to integer parameter
 * @b: pointer to integer parameter
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
