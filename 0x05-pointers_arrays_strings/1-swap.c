#include "holberton.h"
/**
 *swap_int - Swaps the values of tow integers.
 *@a:Pointer to b.
 *@b:Pointer to a.
 *Return: void.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
