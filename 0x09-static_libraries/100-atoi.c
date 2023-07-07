#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert
 *
 * Return: conversion result integer
*/
int _atoi(char *s)
{
	int c = 0;
	unsigned int q = 0;
	int p = 1;
	int x = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			p *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			x = 1;
			q = (q * 10) + (s[c] - '0');
			c++;
		}

		if (x == 1)
		{
			break;
		}

		c++;
	}

	q *= p;
	return (q);
}
