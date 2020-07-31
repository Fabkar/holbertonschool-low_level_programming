#include "holberton.h"
/**
* get_bit - the value of a bit at a given index.
* @n: integer to convert.
* @index: Index
* Return: integer in bit.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index > ((sizeof(n) * 8)))
		return (-1)
	a = ((n >> index) & 1);
	return (a);
}
