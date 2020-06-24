#include "holberton.h"
/**
 * rev_string - Function thet reverses a string.
 * @s: Pointer.
 *Return: nothing
 */
void rev_string(char *s)
{
	char temp;
	char *end;

	end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (s < end)
	{
		temp =*s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}
}
