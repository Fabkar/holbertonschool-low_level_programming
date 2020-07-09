#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number bytes
 * Return: pointer char.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, c;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{}
	for (j = 0; s2[j]; j++)
	{}
	if (n > j)
		n = j;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		p[c] = s1[c];
	for (c = 0; c < n; c++)
	{	p[i] = s2[c];
		i++;
	}
	p[i] = '\0';
	return (p);
}
