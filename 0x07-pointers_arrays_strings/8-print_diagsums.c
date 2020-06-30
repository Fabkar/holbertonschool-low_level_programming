#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Sum two diagonals of a square matrix.
 * @a: Pointer array.
 * @size: integer
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;
	int n = size * size;

	for (i = 0; i < n; i++)
	{
		if (i % (size + 1) == 0)
		{
			d1 += a[i];
		}
	}
	for (i = n - size; i > 0; i--)
	{
		if (i % (size - 1) == 0)
		{
			d2 += a[i];
		}
	}
	printf("%d, %d\n", d1, d2);
}
