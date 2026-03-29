#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the 2D array, or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Validate input */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for rows */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each row */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* Free previously allocated rows */
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}

	/* Initialize all elements to 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
