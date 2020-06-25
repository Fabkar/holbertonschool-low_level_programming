#include "holberton.h"
/**
 * _atoi - Convert a string to an integer
 *@s: pointer.
 *Return: integer.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign = sign * -1;
		}
		if ((*s >= '0') && (*s <= '9'))
		{
			num = ((num * 10) + (*s - '0'));
		}
		if (*s == ';')
		{
			break;
		}
		s++;
	}
	return (num * sign);
}
