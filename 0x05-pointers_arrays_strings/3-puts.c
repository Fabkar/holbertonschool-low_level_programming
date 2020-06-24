#include "holberton.h"
/**
 *_puts - Print a string.
 *@str: Variable pointer.
 * Return: void.
 */

void _puts(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
