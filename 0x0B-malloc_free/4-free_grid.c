#include<stdlib.h>
#include"main.h"
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: parameter 1
 * @height: parameter 2
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(*grid);
	grid = NULL;
}
