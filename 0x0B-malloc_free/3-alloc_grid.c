#include "main.h"
/**
 * alloc_grid - this is a nested loop to make a grid
 * @width: the width input
 * @height: the height input
 * written by daniel oluwanimotele
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **dan;
	int d, m;

	if (width <= 0 || height <= 0)
		return (NULL);

	dan = malloc(sizeof(int *) * height);

	if (dan == NULL)
		return (NULL);

	for (d = 0; d < height; d++)
	{
		dan[d] = malloc(sizeof(int) * width);
		if (dan[d] == NULL)
		{
			for (; d >= 0; d--)
				free(dan[d]);
			free(dan);
			return (NULL);
		}
	}

	for (d = 0; d < height; d++)
	{
		for (m = 0; m < width; m++)
			dan[d][m] = 0;
	}
	return (dan);
}
