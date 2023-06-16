#include "main.h"
/**
 * alloc_grid - return a pointer to a 2 dimensional array of intergers
 * @width: accept grid width
 * @height: accepts grid height
 *
 * Return: NULL or a pointer the 2 dimentioanl array
 */
int **alloc_grid(int width, int height)
{
	int **my_grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	my_grid = malloc(sizeof(int *) * height);

	if (my_grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		my_grid[x] = malloc(sizeof(int) * width);
		if (my_grid[x] == NULL)
			return (NULL);

	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			my_grid[x][y] = 0;
	}

	return (my_grid);
}
