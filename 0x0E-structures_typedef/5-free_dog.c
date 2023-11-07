#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - This funtion frees the dog
 *
 * @d: pointer to the aaddress of the dog we are to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
