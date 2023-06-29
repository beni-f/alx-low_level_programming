#include <stdio.h>
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;	
	
	while (*dest)
		dest++;
	
	while (*src && i < n)
	{
		*dest++ = *src++;
	
		i++;
	}
	return dest;
	
}
	
