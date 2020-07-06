#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: Number of arguments.
 * @argv: array.
 * Return: 0:
 */
int main(int argc, char **argv)
{
	int m;

	if (argc != 3)
	{
		printf("%s\n","Error");
		return (1);
	}
	m = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", m);
	return (0);
}
