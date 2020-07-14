#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the struct dog.
 * @d: pointer variable struct.
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
