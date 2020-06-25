#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers.
 *@a: input.
 *@n: Elements of teh array.
 *Return: nothing
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}