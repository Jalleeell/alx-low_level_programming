#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural number from n to 98
 * @n: integer to start from
*/

void print_to_98(int n)
{
	int k;

	if (n <= 98)
	{
	for (k = n; k <= 98; k++)
		{
		printf("%d, ", k);
		if (k != 98)
			{
			printf(", ");
			}
		}
	}
	else
	{
	for (k = n; k >= 98; k--)
		{
		printf("%d, ", k);
		if (k != 98)
			{
			printf(", ");
			}

		}
	}
	_putchar('\n');
}
