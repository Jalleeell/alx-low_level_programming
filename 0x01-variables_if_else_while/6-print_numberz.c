#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints single digits from 0 to 9
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}

	putchar('\n');
	return (0);
}
