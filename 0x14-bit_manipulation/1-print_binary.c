#include "holberton.h"
/**
* print_binary - convert a decimal to a binary.
* @n: integer to convert.
* Return: Nothing.
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
