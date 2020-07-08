#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that concatenates tow strings.
 * @s1: pointer to string1.
 * @s2: pointer to string2.
 * Return: Pointer.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1))
	{
		len1++;
	}
	while (*(s2 + len2))
	{
		len2++;
	}

	str = malloc(((len1 + len2) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		*(str + i) = *(s1 + i);
	}
	for (i = 0; i < len2; i++)
	{
		*(str + len1) = *(s2 + i);
		len1++;
	}
	return (str);
}
