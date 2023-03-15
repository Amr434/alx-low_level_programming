/**
*free_grid - function free memory
*@grid: array input
*@height: array height
*/
#include <stdio.h>
#include <stdlib.h>
void free_grid(int **grid, int height)
{
int i;
for (i = 0 ; i < height ; i++)
{
free(grid[i]);
}
}
