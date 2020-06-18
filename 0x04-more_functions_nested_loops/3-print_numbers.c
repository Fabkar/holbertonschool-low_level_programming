#include <stdio.h>
#include "holberton.h"
/**
 *print_numbers - Print numbers 0 a 9..
 *
 *Return: Always 0.
 */
void print_numbers(void)
{
	char c = '0';

	for (c = '0'; c <= '9'; c++)
	{
		_putchar (c);
	}
	_putchar ('\n');
}
