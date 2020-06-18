#include <stdio.h>
#include "holberton.h"
/**
 *print_most_numbers - Print numbers 0 a 9.
 *
 *Return: Always 0.
 */
void print_most_numbers(void)
{
	char c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		{
			_putchar (c);
		}
	}
	_putchar ('\n');
}
