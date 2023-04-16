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
	int **the_grid;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	the_grid = malloc(sizeof(int *) * height);

	if (the_grid == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		the_grid[x] = malloc(sizeof(int) * width);

		if (the_grid == NULL)
		{
			for (; x >= 0; x--)
				free(the_grid[x]);
			free(the_grid);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			the_grid[x][y] = 0;
	}
	return (the_grid);
}
