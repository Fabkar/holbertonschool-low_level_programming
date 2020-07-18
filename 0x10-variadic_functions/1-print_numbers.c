#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_numbers - Print numbers with a separator.
* @n: number of arguments.
* @separator: separator between numbers
* Return: Nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p_number;
	unsigned int i;

	va_start(p_number, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p_number, int));
		if ((i != n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(p_number);
}
