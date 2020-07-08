#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: A pointer in 2D.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (0);

	p = malloc(height * sizeof(int *));
	if (p == '\0')
		return (0);
	for (i = 0; i < height ; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == '\0')
		{
			free(p);
			for (j = 0; j <= i; j++)
				free(p[i]);
			return (0);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
