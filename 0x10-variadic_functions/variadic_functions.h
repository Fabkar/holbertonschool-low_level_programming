#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
* struct formats - struct formats
* @ch: pointer to firts element.
* @func: The function associated.
*/
typedef struct formats
	{
		char *ch;
		void (*func)(va_list);
	} formats;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void character(va_list list);
void integer(va_list list);
void floating(va_list list);
void string(va_list list);
#endif/*_VARIADIC_FUNCTIONS_H*/
