#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_strings - Print strings with a separator.
* @n: number of strings.
* @separator: separator between numbers
* Return: Nothing.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p_str;
	unsigned int i;
	char *c;

	va_start(p_str, n);

	for (i = 0; i < n; i++)
	{
		c = (va_arg(p_str, char *));
		if (c)
			printf("%s", c);
		if (!c)
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p_str);
}
