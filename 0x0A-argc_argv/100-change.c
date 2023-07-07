#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change for an amount of money
 * @argc: argument counter
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (arg == 2)
	{
		int i, mincoins = 0, cash = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (cash >= cents[i])
			{
				mincoins += cash / cents[i];
				cash = cash % cents[i];
				if (cash % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", mincoins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
