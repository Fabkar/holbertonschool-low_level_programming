#include "holberton.h"
/**
 * _pow_recursion - value of x raised to the power of y.
 * @x: Base.
 * @y: power.
 * Return: x^y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
