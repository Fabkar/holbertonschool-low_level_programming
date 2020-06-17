#include "holberton.h"
/**
 *print_last_digit - prints absolute value
 *@r: variable
 *Return: Always 0 (Success)
 */
int print_last_digit(int r)
{
	int n;
	int a;

	if (r < 0)
	{
		n = r % 10;
		a = n * -1;
		_putchar(a + '0');
		return (a);
	}
	else
	{
		n = r % 10;
		_putchar(n + '0');
		return (n);
	}
}
