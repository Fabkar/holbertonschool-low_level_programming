#include "holberton.h"
/**
 * print_rev - Function thet reverses a string.
 * @s: Pointer.
 *Return: nothing.
 */
void print_rev(char *s)
{
	int leng = 0;

	while (*(s + leng) != '\0')
	{
		leng++;
	}
	leng = leng - 1;
	while (leng >= 0)
	{
		_putchar(*(s + leng));
		leng--;
	}
	_putchar('\n');
}
