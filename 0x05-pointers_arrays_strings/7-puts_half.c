#include "holberton.h"
/**
 * puts_half - Prints half of a string.
 * @str: Pointer.
 *Return: Nothing.
 */

void puts_half(char *str)
{
	int i = 0;
	int h;

	while (*(str + i) != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		h = i / 2;
		while (*(str + h) != '\0')
		{
			_putchar(str[h]);
			h++;
		}
	}
	else
	{
		h = (i + 1) / 2;
		while (*(str + h) != '\0')
		{
			_putchar(str[h]);
			h++;
		}
	}
	_putchar('\n');
}
