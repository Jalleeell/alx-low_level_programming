#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int u, v, ln1, ln2, ln;
	char *result;

	ln1 = ln2 = 0;

	if (s1 != NULL)
	{
		u = 0;
		while (s1[u++] != '\0')
			ln1++;
	}

	if (s2 != NULL)
	{
		u = 0;
		while (s2[u++] != '\0')
			ln2++;
	}

	ln = ln1 + ln2;
	result = (char *)malloc(sizeof(char) * (ln + 1));
	if (result == NULL)
		return (NULL);

	for (u = 0; u < ln1; u++)
		result[u] = s1[u];
	for (v = 0; v < ln2; v++, u++)
		result[u] = s2[v];
	result[ln] = '\0';

	return (result);
}
