#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initialized with a specific char
 * @size: size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *A = malloc(size);
	unsigned int u;

	if (size == 0)
		return (NULL);

	if (*A == NULL)
		return (NULL);

	for (u = 0; u < size; u++)
		A[u] = c;

	return (A);

}
