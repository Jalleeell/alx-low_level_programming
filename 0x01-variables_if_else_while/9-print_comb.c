#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints numbers from 0 to 9 separated by commas
 *              followed by a space
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int o = 0;

	while (o <= 9)
	{
		putchar(o + 48);
		putchar(',');
		putchar(' ');
		o++;
	}

	putchar('\n');
	return (0);
}

