#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid -  function that returns a pointer to a 2 array of integers
 *@grid: the address of the two dimensional grid
 *@width: width of the grid
 *@height: height of the grid
 *Return:NULL on failure
*/
int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
{
return (NULL);
}
int **grid = (int **)malloc(sizeof(int *) * height);
if (grid == NULL)
{
return NULL;
}
int i;
int j;
for (i = 0; i < hieght; i++)
{
grid[i] = (int *)malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return NULL;
int k;
for (k = 0; k < width; k++)
grid[i][k] = 0;
}
return grid;
}
}
