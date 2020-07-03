#include <stdio.h>
/**
 * _num_pr - recursion to find a prime number.
 * @n: Integer.
 * @b: base number to check.
 * Return: (1) n is prime, (0) otherwise.
 */
int _num_pr(int n, int b)
{
	if (b % n == 0 || b < 2)
		return (0);
	else if (n == b - 1)
		return (1);
	else if (b > n)
		return (_num_pr(n + 1, b));
	return (1);
}
/**
 * is_prime_number - checker
 * @n: integer to check.
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	return (_num_pr(2, n));
}
