#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints numbers from 0 to 9
 *             separated by commas and followed by a space
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
	putchar(c);
	putchar(',');
	putchar(' ');
	c++;
	}

	putchar('\n');
	return (0);
}

