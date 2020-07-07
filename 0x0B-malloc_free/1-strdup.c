#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Return pointer to a newly allocated space in memory.
 * @str: string.
 * Return: Pointer.
 */
char *_strdup(char *str)
{
	unsigned int len = 0, i = 0;
	char *p;

	if (!str)
		return (NULL);

	while (str[len])
	{
		len++;
	}

	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	while (len > 0)
	{
		*(p + i) = *(str + i);
		i++;
		len--;
	}
	return (p);
	free(p);
}
