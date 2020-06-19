#include <stdio.h>
#include "holberton.h"
/**
 *_isupper - check without a character is of uppercase type.
 *@c: is the input character
 *Return: Always 0.
 */
int _isupper(int c)
{
/*if want print in octal use 0 at begin*/
	if ((c >= 0x41) && (c <= 0x5A))
	{
		return (1);
	}
	else
		return (0);
}
