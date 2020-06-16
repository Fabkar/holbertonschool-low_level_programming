#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet in lowcase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	char x = 'a';

	for (i = 0; i < 10; i++)
	{
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		x = 'a';
	_putchar('\n');
	}
}
