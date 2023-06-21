#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural number from n to 98
 * @n: integer to start from
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d, ", n);

		}
	}
	_putchar('\n');
}
