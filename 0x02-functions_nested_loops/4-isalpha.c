#include "main.h"

/**
 * _isalpha - check for alphabetic chararcter
 * @c: char to check
 *
 * Return: 1 if true else return 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

		return (1);

	return (0);
}
