#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees allocated memory for struct dog
 * @d: struct dog to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
