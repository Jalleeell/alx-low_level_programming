#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints lowercase and uppercase alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}

	putchar('\n');
	return (0);
}
