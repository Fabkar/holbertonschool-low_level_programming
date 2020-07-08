#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - check the code for Holberton School students.
 * @ac: Number of arguments.
 * @av: array 2D:
 * Return: Pointer 2D.
 */
char *argstostr(int ac, char **av)
{
	int i, j, n = 0, c = 0;
	char *p = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0 ; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			c++;
	}

	p = malloc(sizeof(char) * (c + 1 + ac));

	if (p == NULL)
		return (NULL);
	for (i = 0 ; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[n] = av[i][j];
			n++;
		}
		p[n] = '\n';
		n++;
	}
	return (p);
}
