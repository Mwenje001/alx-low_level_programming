#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing.
 */

/**
 *
 *  * free_grid - Frees a 2-dimensional array of integers.
 *
 *   * @grid: The 2-dimensional array of integers to be freed.
 *
 *    * @height: The height of grid.
 *
 *     */

void free_grid(int **grid, int height)

{

	int index;

	for (index = 0; index < height; index++)

		free(grid[index]);

	free(grid);
}
