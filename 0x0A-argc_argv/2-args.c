#include <stdio.h>
/**
 * main - Print all arguments
 * @argc: number of arguments.
 * @argv: array vector.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	while (argc && *argv)
	{
		printf("%s\n", *argv);
			argv++;
	}
	return (0);
}
