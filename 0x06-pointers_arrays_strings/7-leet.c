#include "holberton.h"
/**
 * leet - switch .
 * @s: pointer
 * Return: s.
 */
char *leet(char *s)
{
	int i, j;
	char leet[10] = "aeotlAEOTL";
	char num[10] = "4307143071";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (*(s + i) == *(leet + j))
			{
				*(s + i) = *(num + j);
			}
		}
	}
	return (s);
}
