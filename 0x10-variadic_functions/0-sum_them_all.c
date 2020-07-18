#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - sum all integers.
* @n: number of arguments.
* Return: integer.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list op_sum;
	int sum = 0;
	unsigned int i;

	va_start(op_sum, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(op_sum, int);
	}
	va_end(op_sum);
	return (sum);
}
