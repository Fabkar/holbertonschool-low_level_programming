#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 * @s: Argument pointer to char
 *
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i;
	int p = 32;

	for (i = 0; s[i]; i++)
	{
		if (((s[i] >= 'a') && (s[i] <= 'z'))
		    && ((s[i - 1] == ' ') || (s[i - 1] == '\n')
			|| (s[i - 1] == ',') || (s[i - 1] == ';')
			|| (s[i - 1] == '.') || (s[i - 1] == '!')
			|| (s[i - 1] == '?') || (s[i - 1] == '"')
			|| (s[i - 1] == '(') || (s[i - 1] == ')')
			|| (s[i - 1] == '{') || (s[i - 1] == '}')
			|| (s[i - 1] == '\t')))
		{
			s[i] = s[i] - p;
		}
		else if ((s[i] >= 97 && s[i] <= 122) && i == 0)
		{
			s[i] = s[i] - 32;
		}
		else
		{
			s[i] = s[i];
		}
	}
	return (s);
}
