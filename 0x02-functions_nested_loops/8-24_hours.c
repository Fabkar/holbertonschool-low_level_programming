#include "holberton.h"

/**
 * jack_bauer - print hours and minutes
 *
 *Return: Always 0.
 */

void jack_bauer(void)
{
	int h;
	int m;
	char del = ':';

	for (h = 00; h <= 23; h++)
	{
		for (m = 00; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(del);
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
