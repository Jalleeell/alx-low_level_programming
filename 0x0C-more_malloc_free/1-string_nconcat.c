#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: The returned pointer shall point to a newly allocated space in memor
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, y, o;
	char *s;

	if (s1 == NULL)
	{
		m = 0;
	}
	else
	{
		for (m = 0; s1[m]; ++m)
			;
	}
	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; s2[y]; ++y)
			;
	}
	if (y > n)
		y = n;
	s = malloc(sizeof(char) * (m + y + 1));
	if (s == NULL)
		return (NULL);
	for (o = 0; o < m; o++)
		s[o] = s1[o];
	for (o = 0; o < y; o++)
		s[o + m] = s2[o];
	s[m + y] = '\0';
	return (s);
}
