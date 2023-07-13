#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);
	
	if (a == NULL)
		return (NULL);
	
	return (a);
}
