#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array of integers
 * @grid: pointer to the 2D array
 * @height: number of rows
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Check for NULL pointer */
	if (grid == NULL)
		return;

	/* Free each row */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free the main pointer */
	free(grid);
}
