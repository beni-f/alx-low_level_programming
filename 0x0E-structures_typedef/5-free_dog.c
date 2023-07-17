#include "dog.h"
#include <stdio.h>
/**
 * free_dog - frees memory
 *
 * @d: is pointer to dog_t
 *
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
