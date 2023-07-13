#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);

	if (b == 0 || a == NULL)
		return ("98");
	
	return (a);
}
