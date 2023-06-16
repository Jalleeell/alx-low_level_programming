#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A c program that checks if the number n is ositive or negative
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if condition is true then print the following */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	/* else if the condition is true then print the following */
	}
		else if (n == 0)
	{
		printf("%d is zero\n", n);
	/* else print the following */
	}
		else
	{
		printf("%d is negative\n", n);
	return (0);
}
