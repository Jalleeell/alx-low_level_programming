#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return:
*/
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *k = str;
	int o;

	while (*k != '\0')
	{
		k++;
		i++;
	}
	j = i - 1;
	for (o = 0 ; o <= j ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
