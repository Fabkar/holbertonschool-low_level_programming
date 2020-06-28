#include "holberton.h"
/**
 * _memset - fill memory.
 * @s: Pointer variable.
 * @b: char.
 * @n: integer.
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		*(s + a) = b;
		a++;
	}
	return (s);
}
