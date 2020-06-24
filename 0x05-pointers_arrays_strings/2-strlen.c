#include "holberton.h"
/**
 *_strlen - count length of a string.
 *@s: Variable pointer.
 * Return: lenght of a sting.
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
