#include <stdio.h>
#include "holberton.h"
/**
 *print_diagonal - Draw a diagonal line.
 *@n: integer.
 *Return: Always 0.
 */
void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	y = 0;
	while (y < n)
	{
		x = 0;
		while (x < y)
		{
			_putchar(' ');
			x++;
		}
		_putchar ('\\');
		_putchar('\n');
		y++;
	}
}
