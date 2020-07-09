#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: # of elements.
 * @size: the size of elements.
 *
 * Return: Pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
