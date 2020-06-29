#include "holberton.h"
/**
 * _memcpy - Copy n characters from memory area src to memory area dest.
 * @dest: Pointer to the destination array where the content will be copied
 * @src: Pointer to the source of data to be copied.
 * @n: Number of bytes to be copied.
 * Return: Pointer dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
