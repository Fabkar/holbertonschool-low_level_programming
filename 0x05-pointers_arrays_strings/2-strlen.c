#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
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
