#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create array of integers.
 * @min: integer 1.
 * @max: integer 2.
 *
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int i, r;
	int *p;

	if (min > max)
		return (NULL);
	r = max - min + 1;
	p = malloc(sizeof(*p) * r);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < r; i++)
		p[i] = min++;
	return (p);
}
