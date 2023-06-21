#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: computes and prints the sum of all multiples of 3 or 5
 * below 1024
 *
 * Return: 0 (success)
*/
int main(void)
{
	int x, sum;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum = sum + x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
