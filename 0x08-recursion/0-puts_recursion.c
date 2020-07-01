#include "holberton.h"
/**
 * _puts_recursion - Print a string.
 * @s: string.
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}
