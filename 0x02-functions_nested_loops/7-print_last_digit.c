#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @x: number to process to get the last digit ld
 *
 * Return: last digit ld
*/

int print_last_digit(int x)
{
	int ld;

	if (x > 0)
	{
		ld = x % 10;
	}

	else
	{
		ld = (-1) * (x % 10);
	}

	_putchar((ld) + '0');
	return (ld);
}
