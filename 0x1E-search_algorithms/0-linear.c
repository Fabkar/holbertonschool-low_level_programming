#include "search_algos.h"
/**
 * linear_search - function that searches for a value in
 * an array of integers using the Linear search algorithm.
 * @array: Pointer to the first element.
 * @size: Number of element in array.
 * @value: The value to search for.
 * Return: the index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array)
	{
		for (; i < (int)size; i++)
		{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		}
	}
	return (-1);
}
