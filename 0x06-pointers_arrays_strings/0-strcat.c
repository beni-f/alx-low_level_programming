#include <stdio.h>
#include "main.h"

char *_strcat(char *dest, char *src)
{
	int length1, length2, i;

	for (length1 = 0; *src < '\0'; length1++)
		;
	for (length2 = 0; *dest < '\0'; length2++)
		;	
	for (i = 0; i < length1; i++)
	{
		dest[length2 + i] = src[i]; 
	}
	return dest;
}
