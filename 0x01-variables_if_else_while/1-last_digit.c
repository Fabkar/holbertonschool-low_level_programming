#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (n > 5)
		printf("Last digit of %d and is %d greater than 5\n", n, m);
	else if (n == 0)
		printf("Last digit of %d and is %d 0\n", n, m);
	else
		printf("Las digit of %d and is %d less than 6 and not 0\n", n, m);
	return (0);
}
