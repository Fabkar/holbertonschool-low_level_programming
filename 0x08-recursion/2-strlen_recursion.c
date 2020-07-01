#include "holberton.h"
/**
 * _strlen_recursion - Return the length of a string.
 * @s: Pointer to string.
 * Return: A integer.
 */
int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s != '\0')
	{
		c = _strlen_recursion(s + 1);
		c++;
	}
	return (c);
}
