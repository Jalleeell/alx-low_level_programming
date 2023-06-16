#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints lowercase alphabet backwards
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
