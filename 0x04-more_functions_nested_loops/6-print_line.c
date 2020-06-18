#include <stdio.h>
#include "holberton.h"
/**
 *print_line - Draw a straight line.
 *@n: integer.
 *Return: Always 0.
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
