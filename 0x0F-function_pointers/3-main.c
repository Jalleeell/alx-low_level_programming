#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int (*kalc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	kalc = get_op_func(argv[2]);

	if (!kalc)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", kalc(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
