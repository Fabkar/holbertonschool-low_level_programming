#include "holberton.h"
/**
* flip_bits - returns the number of bits changed.
* @n: a integer.
* @m: a integer.
* Return: integer of bits changed.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, a;

	m = m ^ n;

	for (a = (sizeof(m) * 8); a > 0; a--)
	{
		if (((m >> a) & 1) == 1)
			count++;
	}
	return (count);
}
