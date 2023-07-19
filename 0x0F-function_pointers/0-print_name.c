#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name
 *
 * @name: string parameter
 * @f: pointer to a function
 *
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
