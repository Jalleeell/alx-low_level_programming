#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int opt1, opt2, answr;
	char o;
	int (*kalc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opt1 = atoi(argv[1]);
	opt2 = atoi(argv[3]);

	kalc = get_op_func(argv[2]);

	if (!kalc)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && opt2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	answr = kalc(opt1, opt2);

	printf("%d\n", answr);

	return (0);
}
