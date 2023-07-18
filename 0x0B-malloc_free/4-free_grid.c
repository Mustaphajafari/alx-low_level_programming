#include "main.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * free_grid - frees a 2 dimensional grid previously created by my alloc_grid
 * @grid: pointer to
 * @height: height of the grid
 */


void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;


for (i = 0; i < height; i++)

{
free(grid[i]);
}
free(grid);



}
