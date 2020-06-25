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

	while (a[n])
	{
		n++;
	}
	n = n - 2;
	j = 0;
	while (j < n)
	{
		z = a[n];
		a[n] = a[j];
		a[j] = z;
		n--;
		j++;
	}
}
