#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return:
*/

void more_numbers(void)
{
	int rpt, line;

	for (rpt = 1; rpt <= 10; rpt++)
	{
		for (line = 0; line <= 14; line++)
		{
			if (line > 9)
			_putchar('1');
			_putchar((line % 10) + '0');
		}
			_putchar('\n');
	}
}
