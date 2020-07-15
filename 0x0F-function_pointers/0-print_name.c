#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - print a name.
* @name: name.
* @f: pointer to function.
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
