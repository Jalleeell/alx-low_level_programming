#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: int
 *
 * Return: The returned pointer shall point to a newly allocated space in memor
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ln1 = 0, ln2 = 0;
	char *t;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	ln1 = _strlen(s1);
	ln2 = _strlen(s2);

	if (n >= ln2)
		n = ln2;

	t = malloc(sizeof(char) * (ln1 + n + 1));
	if (t == NULL)
		return (NULL);

	_strcpy(t, s1);
	_strncat(t, s2, n);

	return (t);
}
