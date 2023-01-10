#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: Number of columns
 * @height: Number of rows
 *
 * Return: the pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j; /* To be used for loop iterations */

	if (width < 1 || height < 1)
	{
	return (NULL);
	}

	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(matrix[i]);
			}
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
