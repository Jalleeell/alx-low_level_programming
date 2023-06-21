#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * from 00:00 until 23:59
*/
void jack_bauer(void)
{
	int h, min;

	for (h = 0; h < 24; h++)
	{
		for (min = 0; min < 60; min++)
		{
			putchar((h / 10) + '0');
			putchar((h % 10) + '0');
			putchar(':');
			putchar((min / 10) + '0');
			putchar((min % 10) + '0');
			putchar('\n');
		}
	}

}
