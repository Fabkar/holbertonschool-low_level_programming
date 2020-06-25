#include "holberton.h"
/**
 * _strncpy - Copy strings of even numbers.
 *@dest: string destination.
 *@src: string source.
 *@n: number bytes for limiting.
 *Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (n > j)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
