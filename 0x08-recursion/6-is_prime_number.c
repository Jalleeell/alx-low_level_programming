#include "main.h"

/**
 * checker - prime number checker
 * @u:parameter
 * @v:parameter
 *
 * Return:int
 */
int checker(int u, int v)
{
	if (v < 2 || v % u == 0)
		return (0);
	else if (u > v / 2)
		return (1);
	else
		return (checker(u + 1, v));
}

/**
 * is_prime_number - checks if integer is a prime number
 * @n:int
 *
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (checker(2, n));
}
