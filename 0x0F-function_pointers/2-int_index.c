#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: array size
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int u;

	if (array && cmp)
	{
		for (u = 0; u < size; i++)
		{
			if (cmp(array[u]) != 0)
				return (u);
		}
	}

	return (-1);
}
