#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * that contains a copy of the string given as a parameter.
 * @str: the original string
 *
 * Return: a pointer to the duplicated string or NULL if
 * insufficient memory was available
 */

char *_strdup(char *str)
{
	int i = 0, ln = 0;
	char *cp;

	if (str == NULL)
		return (NULL);

	while (str[ln] != '\0')
		ln++;

	cp = (char *)malloc((sizeof(char) * ln) + 1);
	if (cp == NULL)
		return (NULL);

	for (; i < ln; i++)
		cp[i] = str[i];
	cp[ln] = '\0';

	return (cp);
}
