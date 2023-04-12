#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees memory for grid creayed in previous task
*@grid: 2-D array
*@height: height of grid
* Return: No return value
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
