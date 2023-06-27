#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string
*/

void puts_half(char *str)
{
	int i, n, j;

	i = 0;

	for (j = 0; str[j] != '\0'; j++)
		i++;

	n = (i / 2);

	if ((i % 2) == 1)
		n = ((i + 1) / 2);

	for (j = n; str[j] != '\0'; j++)
		_putchar(str[j]);
	_putchar('\n');
}
