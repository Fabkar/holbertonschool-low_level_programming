#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - copy string to another string.
 *@dest: array.
 *@src: elements of array
 *Return: char pointer.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}
