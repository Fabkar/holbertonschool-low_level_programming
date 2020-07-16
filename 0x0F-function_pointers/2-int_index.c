#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - searches for an integer.
* @array: pointer to array.
* @size: size of array.
* @cmp: Pointer to a function.
* Return: .
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
