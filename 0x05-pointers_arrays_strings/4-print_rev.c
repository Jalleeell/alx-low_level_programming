#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
*/

void print_rev(char *s)
{
	int i, n;

	for (n = 0; s[i] != '\0'; n++)

	for (i = n; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
