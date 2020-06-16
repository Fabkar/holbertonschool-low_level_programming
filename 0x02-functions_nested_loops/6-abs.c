#include "holberton.h"
/**
 *_abs - the absolute value
 *@n: Variable
 *Return: Always 0.
 */

int _abs(int n)
{
	int r;

	if (n < 0)
	{
		r = n * -1;
		return (r);
	}
	else
	{
		return (n);
	}
}
