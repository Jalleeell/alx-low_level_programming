#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural number from n to 98
 * @n: integer to start from
*/
void print_to_98(int n)
{

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
				printf("%d, ", n);
			else if (n == 98)
				printf("%d\n", n);
		}
	} else if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
				printf("%d, ", n);
			else if (n == 98)
				printf("%d\n", n);
		}
	}
}
