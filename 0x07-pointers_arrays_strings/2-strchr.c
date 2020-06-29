#include "holberton.h"
/**
 * _strchr - found character in string.
 * @s: Pointer.
 * @c: char.
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}
