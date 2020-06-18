#include <stdio.h>
#include "holberton.h"
/**
 *more_numbers - Print numbers from 0 to 14.
 *
 *Return: Always 0.
 */
void more_numbers(void)
{
	int f;
	int x;

	for (f = 0; f < 9; f++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
			else
			{
				_putchar(x + '0');
			}
		}
		_putchar('\n');
	}
}
