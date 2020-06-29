#include "holberton.h"
/**
 * _memset - fill the first n byte of the memory.
 * @s: Pointer variable.
 * @b: value to be set.
 * @n: number of bytes to be set to the value.
 *
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;
	char *p = s;

	while (a < n)
	{
		*p = b;
		a++;
		p++;
	}
	return (s);
}
