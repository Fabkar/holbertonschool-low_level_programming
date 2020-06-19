#include <stdio.h>
#include "holberton.h"
/**
 *print_triangle - Print a Triangle.
 *@size: integer.
 *Return: Always 0.
 */
void print_triangle(int size)
{
	int f, c;

	if (size > 0)
	{
	for (f = 0; f < size; f++)
	{
		for (c = (size - 1); c > f; c--)
		{
			_putchar(' ');
		}
		for (c = 0; c <= f; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
