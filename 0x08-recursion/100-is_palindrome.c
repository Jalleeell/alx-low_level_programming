#include "main.h"
#include <stdbool.h>

bool check_plndrm(char *s, int l, int r);
int _strlen_recursion(char *);

/**
 * is_palindrome - check if s is palindrome
 * @s: string to check
 *
 * Return: 1 if n is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (check_plndrm(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: parameter
 *
 * Return:  the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_plndrm - checks the characters for palindrome
 * @s: string to check
 * @l: left char index
 * @r: right char index
 * @s: string
 *
 * Return: 1 if palindrome, 0 if not
 */


bool check_plndrm(char *s, int l, int r)
{
	if (l >= r)
		return (true);
	else if (s[l] == s[r])
		return (check_plndrm(s, l + 1, r - 1));
	else
		return (false);
}
