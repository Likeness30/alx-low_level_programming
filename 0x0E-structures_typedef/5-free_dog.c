#include "dog.h"

/**
 * free_dog - This function frees dog
 * @d: Pointer to variable
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		return;
	}

	if (d->name != NULL)
	free(d->name);
	if (d->owner != NULL)
	free(d->owner);
	free(d);
}
