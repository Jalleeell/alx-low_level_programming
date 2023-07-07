#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: argument counter
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int u;

	for (u = 0; u < argc; u++)
	{
		printf("%s\n", argv[u]);
	}
	return (0);
}
