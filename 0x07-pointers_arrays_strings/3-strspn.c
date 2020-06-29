#include "holberton.h"
/**
 * _strspn - find a string for a set of byte.
 * @s: string source.
 * @accept: value string accept.
 * Return: string s and NULL.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i]; i++)
	{
		if (c != i)
		{
			break;
		}
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				c++;
			}
		}
	}
	return (c);
}
