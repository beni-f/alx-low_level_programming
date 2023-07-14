#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;

	a = ptr;

	if (a == NULL)
		return (NULL);

	
