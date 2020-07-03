#include "holberton.h"

/**
 * is_palindrome - a string is a palindrome.
 * @s: String pointer.
 * Return: integer (1) if a string is a palidrome .
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen(s);
	return (find_pal(s, 0, length - 1));
}
/**
 * _strlen - find the length of the string.
 * @s: String Pointer.
 * Return: Integer.
 */
int _strlen(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen(s));
	}
	return (0);
}
/**
 * find_pal - function to find the palidrome.
 * @s: string pointer.
 * @start: integer to start.
 * @end: integer to end.
 * Return: integer (1) to true or (0) to false.
 */
int find_pal(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[end] == s[start])
		return (find_pal(s, start + 1, end - 1));
	else
		return (0);
}
