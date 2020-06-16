#include "holberton.h"
/**
 * print_alphabet - print alphabet in lowcase
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char x = 'a';

	while (x <= 'z')
	{
	_putchar(x);
	x++;
	}
	_putchar('\n');
}
