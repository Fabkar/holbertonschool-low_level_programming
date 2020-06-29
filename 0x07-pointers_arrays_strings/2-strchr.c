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
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
