#include <stdio.h>
#include <stdlib.h>
/**
 * positive_or_negative - testing.
 * @i: integer to clasify
 * Return: Always 0 (Success)
 **/
int positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
	return (0);
}
