#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - calculator
* @argc: Number of argument.
* @argv: array.
* * Return: integer.
*/
int main(int argc, char **argv)
{
	int a, b, c;
	int (*opp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	opp = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (opp == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((opp == op_div || opp == op_mod) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	c = opp(a, b);
	printf("%d\n", c);
	return (0);
}
