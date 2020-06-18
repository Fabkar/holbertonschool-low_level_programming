#include <stdio.h>
#include "holberton.h"
/**
 *_isdigit - check for digit 0 through 9.
 *@c: is the input character
 *Return: Always 0.
 */
int _isdigit(int c)
{
/*single quotes to indicate character*/
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}
