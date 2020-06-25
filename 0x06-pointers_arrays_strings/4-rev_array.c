#include "holberton.h"
/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: Pointer.
 * @n: number of elements.
 *Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int j, z;

	j = 0;
	n = n - 1;
	while (j < n)
	{
		z = a[n];
		a[n] = a[j];
		a[j] = z;
		n--;
		j++;
	}
}
