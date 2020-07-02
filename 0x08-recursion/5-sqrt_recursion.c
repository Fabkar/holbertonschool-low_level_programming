#include "holberton.h"

/**
 * _sqrt_recursion - The natural square root of a number.
 * @n: integer
 * Return: n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if ((n == 0) || (n == 1))
		return (n);
	else
		return (func_alt(n, 2));
}
/**
 * func_alt - function altern to find a square.
 * @n: entry value.
 * @a: root.
 * Return: a square root number , (-1) no found.
 */
int func_alt(int n, int a)
{
	if ((a * a) == n)
		return (a);
	if ((a * a) > n)
		return (-1);
	else
		return (func_alt(n, a + 1));
}
