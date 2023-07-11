#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: array's width
 * @height: array height
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **A, i, j;
	int ln = width * height;

	if (ln <= 0)
		return (NULL);

	A = (int **)malloc(sizeof(int *) * height);
	if (A == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		A[i] = (int *)malloc(sizeof(int) * width);
		if (A[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(A[i]);
			free(A);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			A[i][j] = 0;

	return (A);
}
