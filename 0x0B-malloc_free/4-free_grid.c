#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - Free a mult array
 *
 * @grid: pointer to the mult array
 * @height: height of the mult array
 *
 * Return: Don't return, only free
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
