#include "holberton.h"
/**
 * factorial - factorial of a given number.
 * @n: Integer.
 * Return: Integer.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
