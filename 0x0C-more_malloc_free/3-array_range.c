#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum values stored
 * @max: maximum values stored
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, sz;

	if (min > max)
		return (NULL);

	sz = max - min + 1;

	p = malloc(sizeof(int) * sz);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
