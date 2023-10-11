#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Function frees dogs
 * @d: input for struct dog to free
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
