#include <stdio.h>
#include "holberton.h"
/**
 *print_square - Print a  square.
 *@size: integer.
 *Return: Always 0.
 */
void print_square(int size)
{
	int x = 0;
	int y;

	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			_putchar(35);
			y++;
		}
		_putchar('\n');
		x++;
	}
	if (size <= 0)
	{
		_putchar ('\n');
	}
}
