#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a
 * 2dimensional array of int
 * @width: the number of columns
 * @height: the number of rows
 * Return: a pointer to the 2dimensional array on success. Otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	int i, **ipp, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ipp = malloc(height * sizeof(int *));
	if (ipp == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ipp[i] = malloc(width * sizeof(int));
		if (ipp[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(ipp[i]);
			}
			free(ipp);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ipp[i][j] = 0;
	}
	return (ipp);

}
