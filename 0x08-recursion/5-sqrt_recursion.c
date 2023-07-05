#include "main.h"

/**
 * skrt -  finds the natura square root of a number
 * @u: parameter
 * @v: parameter
 *
 * Return: sqrt
 */
int skrt(int u, int v)
{
	if (v * v > u)
	{
		return (-1);
	}
	else if (v * v == u)
	{
		return (v);
	}
	else
		return (skrt(u, v + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: integer to sqrt
 *
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (skrt(n, 0));
}
