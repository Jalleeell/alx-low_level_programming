#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uni;
	int ln, baze;

	if (!b)
		return (0);

	uni = 0;

	for (ln = 0; b[ln] != '\0'; ln++)
		;

	for (ln--, baze = 1; ln >= 0; ln--, baze *= 2)
	{
		if (b[ln] != '0' && b[ln] != '1')
		{
			return (0);
		}

		if (b[ln] & 1)
		{
			uni += baze;
		}
	}

	return (uni);
}
