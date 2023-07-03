#include "main.h"
#include <stdio.h>

char *_strchr(char *s, char c)
{
	int i, length = 0;

	for (length = 0; s[length] != '\0'; length++)
		;
	
	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
		{
			
			return (&s[i]);
		}
	}
	return (0);
}
		
