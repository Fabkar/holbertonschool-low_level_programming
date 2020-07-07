#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: integer usigned.
 * @c: char.
 * Return: char.
 */
char *create_array(unsigned int size, char c)
{
	char *p = NULL;
	unsigned int i;

	p = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	if (!p)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
	free(p);
}
