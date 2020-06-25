#include "holberton.h"
/**
 * _strncat - Function that concatenates tow strings.
 *@dest: pointer
 *@src: string
 *@n: integer.
 *Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0' && n > j)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}
