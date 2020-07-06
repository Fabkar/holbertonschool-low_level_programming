#include <stdio.h>
/**
 * main - Print a name followed a new line.
 * @argc: Number of argunments.
 * @argv: Array contains arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
