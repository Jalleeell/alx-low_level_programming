#include "main.h"

/**
 * rev_string -  reverses a string.
 * @s: string
*/

void rev_string(char *s)
{
	char c = s[0];
	int j = 0;
	int i;

	while (s[j] != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		j--;
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

