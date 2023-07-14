#include "main.h"

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements of array
 * @size: size of array
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		x[b] = 0;
	return (x);
}
