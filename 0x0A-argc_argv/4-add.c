#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: argument counter
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (--argc)
	{
		char *v = argv[argc];

		while (*v)
		{
			if (*v < '0' || *v > '9')
			{
				printf("Error\n");
				return (1);
			}
			v++;
		}

		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);
	return (0);
}
